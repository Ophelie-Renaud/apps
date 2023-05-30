# Multinode Partitioning with Core Number and Speed Considerations, and Simulated Metric-Based Readjustments for Transfer Cost for Dataflow Actors

The goal of the method is to distribute a dataflow graph over a set of defined nodes.
The method encompasses three main steps: the distribution of dataflow actors at the node level, followed by their allocation at the thread level based on core speed and quantity, and ultimately the readjustment of the distribution considering transfer time costs.

## Node Partitioner
The method initiates by determining the number of equivalent cores per node, which is based on the computation speed and the initial quantity of cores. This equivalence is indexed according to the slowest core within the system.
Next, the method calculates the cumulative equivalent time for the entire graph and determines the proportional cumulative time for each subgraph associated with a specific node. Each actor is then assigned instance by instance in a topological order until it aligns with the cumulative time.
Subsequently, the method partitions the original graph into n subgraphs, each serving as a pipeline stage allocated to a node. Three graph cutting patterns are taken into consideration.

## Thread Partitioner
Following that, the subsequent stage involves adjusting the granularity of each subgraph according to the predetermined node. This adaptation is carried out utilizing the SCAPE method, the specific intricacies of which are provided in [1](https://hal.science/hal-04089941v1/file/DASIP__Architecture_aware_Clustering_of_Dataflow_Actors_for_Controlled_Scheduling_Complexity.pdf). Subsequently, each subgraph is mapped and scheduled using a list-scheduling CPN dominant heuristic.

## Thread Readjustment
Concluding the process, the simulation suite is employed using the SimGrid tool. If the communication time becomes significant compared to the individual calculation time of the dataflow actors, a readjustment of the subgraphs is carried out. This adjustment is guided by feedback that includes load distribution per node. In a topological order, the method calculates the surplus amount for each subgraph and executes actor migration. Once the load balancing is confirmed, the final parallel code can be generated.

# Tuto
The relevance of the partitioning method is illustrated on the stereo image processing application, which receives as input 2 images or a video and returns a depth map.

## Installation
- Install PREESM see [getting PREESM](https://preesm.github.io/get/)
- download this present project

## Open project
A Tutorial Project can be found here. The project needs to be imported in your workspace. To do so, follow these steps:

    1. Go to “File > Import…”
    2. In the wizard, select “General > Existing Projects into Workspace”.
    3. Click “Next”
    4. Select “Select archive file”, then “Browse…”
    5. Select the zip archive you downloaded
    6. Click “Next”.

Once these steps are completed, the unzipped project files can be accessed either from the “Package Explorer” view of Eclipse, or directly in the “Workspace” directory of eclipse (using your favorite browser).

## Partitioning automation
The present project contains folders with the name **Algo** for the algorithm model, **Archi** for the architecture model, **Scenarios** for the parameters and constraints of rapid prototyping, **Code** for the generated code, **Algo/generated** for the exported intermediate information, and **Workflows** for the different available rapid prototyping workflows.

### Node Partitioning
The node partitioner receives input in the form of the original dataflow graph (Algo/genuineAlgo/stereo.diagram) and the authentic architecture (Archi/genuineArchi.slam). These inputs are filled with the genuine scenario (Scenario/genuineScenario.scenario).

You can generate the partitioned graphs following these steps:

    1. open node_partitioner.workflow file
    2. rightclick on the workflow “Run workflow > ..”
    3. Select genuine.scenario
    
.. or take advantage of the provided graphs (Algo/part/..).
![](https://github.com/Ophelie-Renaud/apps/blob/main/stereo.part/Pic/node_partitioner.png)
The partitioner produces subgraphs within the Algo folder and a topgraph with actors defined by a newly generated code. Each subgraph code includes node-specific initialization, synchronization, and thread launch details. Each core is assigned a thread.

:sunglasses:
A fixed number of thread is define an is equal to the number of Cores per nodes.
 Fore each node a main Core is define.
 Each thread is associated to a define function whose prototype is declare in these files.
extern output input of each subgraph are declared pointer.
The subgraphs definition create thread and launch them. 


### Thread Partitioning

You can simulate the intranode resource allocation and observe the generated gantt for each subgraphs

    1. open scape.workflow file
    2. rightclick on the workflow “Run workflow > ..”
    3. Select subi.scenario

![](https://github.com/Ophelie-Renaud/apps/blob/main/stereo.part/Pic/thread_partitioner.png)

### Final thread code generation
In the case that data transfer cost is negligible compare to parallelism gainst and the the partition is already balanced the you can generate sub-thread code. 

    1. open scape_codegen.workflow file
    2. rightclick on the workflow “Run workflow > ..”
    3. Select subi.scenario

![](https://github.com/Ophelie-Renaud/apps/blob/main/stereo.part/Pic/thread_partitioner_code.png)

### Simulation

$add \ SimGrid \ part$

### Main code generation


![](https://github.com/Ophelie-Renaud/apps/blob/main/stereo.part/Pic/main_codegen.png)

