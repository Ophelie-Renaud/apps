# Multinode Partitioning with Core Number and Speed Considerations, and Simulated Metric-Based Readjustments for Transfer Cost for Dataflow Actors

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
The relevance of the SCAPE method is illustrated on the stereo image processing application, which receives as input 2 images or a video and returns a depth map.

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
Partitioning automation works as follows:

![](https://github.com/Ophelie-Renaud/apps/blob/main/stereo.part/Pic/node_partitioner.png)
