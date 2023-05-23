# Scaling up of Clusters of Actors on Processing Elements (SCAPE)
The method employs a dataflow actor grouping technique that relies on pattern matching principles. Its objective is to decrease the complexity of a graph, leading to quicker compilation times, all while maintaining the parallelism of the application and preserving its latency and throughput.

## Native methode (SCAPE1)
The primary objective of the SCAPE1 method is to decrease DATA parallelism by detecting specific patterns called (URC) and (SRV) at a particular hierarchical level. The method groups these patterns while taking into account the number of processing elements in the target architecture. The result is a set of clustering patterns that correspond to the hierarchical levels of the input graph. Additionally, the method includes a level 0 pattern representing the original input graph and a level n+1 pattern representing the entire graph grouped as a single entity.

> details: [O. Renaud, D. Gageot, K. Desnos, J.-F. Nezan. SCAPE: HW-Aware Clustering of Dataflow Actors for Tunable Scheduling Complexity, IETR, 2023](https://hal.science/hal-04089941v1/file/DASIP__Architecture_aware_Clustering_of_Dataflow_Actors_for_Controlled_Scheduling_Complexity.pdf)


## First extension (SCAPE2)
The second method expands upon the first method by incorporating pipeline parallelism into the sequential components. This is achieved by aligning the number of pipeline stages with the number of processing elements. The method identifies sequential portions, which can either be a series of actors with a degree of parallelism below the number of processing elements in the target architecture or cycles.
Regarding the sequential pattern, the method arranges the actors in a topological order to form n groups, where each group has the same duration and is equal to the number of processing elements. 
As for the cycle pattern, the method performs a semi-unfolding of the loop by dividing the original loop into n smaller loops, where n corresponds to the number of processing elements. 
These newly created instances are then pipelined with a specific delay between each instance.

> details: [O. Renaud, N. Haggui, K. Desnos, J.-F. Nezan. Automated Clustering and Pipelining of Dataflow Actors for Controlled Scheduling Complexity, IETR, 2023]

