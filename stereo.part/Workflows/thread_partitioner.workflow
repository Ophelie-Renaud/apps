<?xml version="1.0" encoding="UTF-8"?>
<dftools:workflow errorOnWarning="true" verboseLevel="INFO" xmlns:dftools="http://net.sf.dftools">
    <dftools:scenario pluginId="org.ietr.preesm.scenario.task"/>
    <dftools:task pluginId="graph.exporter.task.identifier" taskId="Graph Exporter">
        <dftools:data key="variables">
            <dftools:variable name="Flat" value="none"/>
        </dftools:data>
    </dftools:task>
    <dftools:task pluginId="clustering.raiser.task.identifier" taskId="SCAPE">
        <dftools:data key="variables">
            <dftools:variable name="Core number" value="1"/>
            <dftools:variable name="Level number" value="1"/>
            <dftools:variable name="Non-cluster actor" value=""/>
            <dftools:variable name="Printer" value="? C {IR}"/>
            <dftools:variable name="SCAPE mode" value="1"/>
            <dftools:variable name="Stack size" value="1000000"/>
        </dftools:data>
    </dftools:task>
    <dftools:task pluginId="pisdf-srdag" taskId="PiMM2SrDAG">
        <dftools:data key="variables">
            <dftools:variable name="Consistency_Method" value="LCM"/>
        </dftools:data>
    </dftools:task>
    <dftools:task pluginId="pisdf-mapper.list" taskId="PiSDF Scheduling">
        <dftools:data key="variables">
            <dftools:variable name="Check" value="True"/>
            <dftools:variable name="Optimize synchronization" value="True"/>
            <dftools:variable name="balanceLoads" value="true"/>
            <dftools:variable name="edgeSchedType" value="Simple"/>
            <dftools:variable name="simulatorType" value="AccuratelyTimed"/>
        </dftools:data>
    </dftools:task>
    <dftools:task pluginId="org.ietr.preesm.plugin.mapper.plot" taskId="Display Gantt">
        <dftools:data key="variables"/>
    </dftools:task>
    <dftools:task
        pluginId="org.ietr.preesm.stats.exporter.StatsExporterTask" taskId="Gantt Exporter">
        <dftools:data key="variables">
            <dftools:variable name="path" value="/Code/generated"/>
        </dftools:data>
    </dftools:task>
    <dftools:dataTransfer from="scenario" sourceport="PiMM"
        targetport="PiMM" to="SCAPE"/>
    <dftools:dataTransfer from="scenario" sourceport="scenario"
        targetport="scenario" to="SCAPE"/>
    <dftools:dataTransfer from="scenario"
        sourceport="architecture" targetport="architecture" to="SCAPE"/>
    <dftools:dataTransfer from="SCAPE" sourceport="PiMM"
        targetport="PiMM" to="PiMM2SrDAG"/>
    <dftools:dataTransfer from="PiMM2SrDAG" sourceport="PiMM"
        targetport="PiMM" to="PiSDF Scheduling"/>
    <dftools:dataTransfer from="SCAPE" sourceport="scenario"
        targetport="scenario" to="PiSDF Scheduling"/>
    <dftools:dataTransfer from="scenario"
        sourceport="architecture" targetport="architecture" to="PiSDF Scheduling"/>
    <dftools:dataTransfer from="SCAPE" sourceport="PiMM"
        targetport="PiMM" to="Graph Exporter"/>
    <dftools:dataTransfer from="SCAPE" sourceport="scenario"
        targetport="scenario" to="Graph Exporter"/>
    <dftools:dataTransfer from="SCAPE" sourceport="scenario"
        targetport="scenario" to="Display Gantt"/>
    <dftools:dataTransfer from="PiSDF Scheduling"
        sourceport="ABC" targetport="ABC" to="Display Gantt"/>
    <dftools:dataTransfer from="SCAPE" sourceport="scenario"
        targetport="scenario" to="Gantt Exporter"/>
    <dftools:dataTransfer from="PiSDF Scheduling"
        sourceport="ABC" targetport="ABC" to="Gantt Exporter"/>
</dftools:workflow>
