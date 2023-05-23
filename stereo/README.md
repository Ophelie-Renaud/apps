# Scaling up of Clusters of Actors on Processing Elements (SCAPE)
The method employs a dataflow actor grouping technique that relies on pattern matching principles. Its objective is to decrease the complexity of a graph, leading to quicker compilation times, all while maintaining the parallelism of the application and preserving its latency and throughput.

## Native methode (SCAPE1)
The primary objective of the SCAPE1 method is to decrease DATA parallelism by detecting specific patterns called Unique Repetition Count (URC) and Single Repetition Vector (SRV) at a particular hierarchical level (lower levels being coarsely clustered). The method groups these patterns while taking into account the number of processing elements in the target architecture. The method returns as many clustering configurations as there are hierarchical levels in the input graph. Additionally, the method includes a level 0 clustering configuration representing the original input graph and a level n+1 clustering configuration representing the entire graph grouped as a single entity.

> details: [O. Renaud, D. Gageot, K. Desnos, J.-F. Nezan. SCAPE: HW-Aware Clustering of Dataflow Actors for Tunable Scheduling Complexity, IETR, 2023](https://hal.science/hal-04089941v1/file/DASIP__Architecture_aware_Clustering_of_Dataflow_Actors_for_Controlled_Scheduling_Complexity.pdf)


## First extension (SCAPE2)
The second method expands upon the first method by incorporating pipeline parallelism into the sequential components. This is achieved by aligning the number of pipeline stages with the number of processing elements. The method identifies sequential portions, which can either be a series of actors with a degree of parallelism below the number of processing elements in the target architecture or cycles.
Regarding the sequential pattern, the method arranges the actors in a topological order to form n groups, where each group has the same duration and is equal to the number of processing elements. 
As for the cycle pattern, the method performs a semi-unfolding of the loop by dividing the original loop into n smaller loops, where n corresponds to the number of processing elements. 
These newly created instances are then pipelined with a specific delay between each instance. This method also provide a set of clustering configurations.

> details: [O. Renaud, N. Haggui, K. Desnos, J.-F. Nezan. Automated Clustering and Pipelining of Dataflow Actors for Controlled Scheduling Complexity, IETR, 2023]

## Second extension (SCAPE3)
The third method expands upon the first two methods by considering the hierarchical context when selecting actor groupings. Since a pipeline cannot be enclosed within a cycle, it is crucial to have knowledge of the higher-level states before introducing delays.
The method involves identifying the highest hierarchical actor contained within a cycle in the graph. If the loop repetition exceeds the number of processing elements, the lower levels are approximately grouped, and the loop is semi-unrolled. However, if the loop repetition is within the acceptable range, the reasons for method #1 are identified, and the use of a pipeline is prohibited.

> details: [O. Renaud, K. Desnos, J.-F. Nezan. Automated Level-Based Clustering of Dataflow Actors for Controlled Scheduling Complexity, IETR, …]

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

## Understand the Inputs and Run the Workflow
The present project contains folders with the name 'Algo' for the algorithm model, “Archi” for the architecture model, “Scenarios” for the parameters and constraints of rapid prototyping, “Code” for the generated code, “Algo/generated” for the exported intermediate information, and “Workflows” for the different available rapid prototyping workflows.


