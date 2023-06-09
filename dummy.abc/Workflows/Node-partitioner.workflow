<?xml version="1.0" encoding="UTF-8"?>
<dftools:workflow errorOnWarning="true" verboseLevel="INFO" xmlns:dftools="http://net.sf.dftools">
    <dftools:scenario pluginId="org.ietr.preesm.scenario.task"/>
    <dftools:task pluginId="node.partitioner.task.identifier" taskId="Partitioner">
        <dftools:data key="variables">
            <dftools:variable name="% offset" value="0"/>
            <dftools:variable name="Node number" value="1"/>
        </dftools:data>
    </dftools:task>
    <dftools:dataTransfer from="scenario" sourceport="PiMM"
        targetport="PiMM" to="Partitioner"/>
    <dftools:dataTransfer from="scenario" sourceport="scenario"
        targetport="scenario" to="Partitioner"/>
    <dftools:dataTransfer from="scenario"
        sourceport="architecture" targetport="architecture" to="Partitioner"/>
</dftools:workflow>
