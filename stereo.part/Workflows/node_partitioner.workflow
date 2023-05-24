<?xml version="1.0" encoding="UTF-8"?>
<dftools:workflow errorOnWarning="true" verboseLevel="INFO" xmlns:dftools="http://net.sf.dftools">
    <dftools:scenario pluginId="org.ietr.preesm.scenario.task"/>
    <dftools:task pluginId="" taskId="Node Partitioner">
        <dftools:data key="variables"/>
    </dftools:task>
    <dftools:dataTransfer from="scenario" sourceport="PiMM"
        targetport="PiMM" to="Node Partitioner"/>
    <dftools:dataTransfer from="scenario"
        sourceport="architecture" targetport="architecture" to="Node Partitioner"/>
    <dftools:dataTransfer from="scenario" sourceport="scenario"
        targetport="scenario" to="Node Partitioner"/>
</dftools:workflow>
