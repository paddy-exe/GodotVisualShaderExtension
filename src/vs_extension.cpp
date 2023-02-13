//© Copyright 2014-2022, Juan Linietsky, Ariel Manzur and the Godot community (CC-BY 3.0)
#include "vs_extension.h"

using namespace godot;

String ExampleShaderNode::_get_caption() const {
	return "ExampleShaderNode";
}

String ExampleShaderNode::_get_description() const {
	return "Example Shader Node only returning the UV";
}

String ExampleShaderNode::_get_category() const {
	return "Extension/Example";
}

VisualShaderNode::PortType ExampleShaderNode::_get_return_icon_type() const {
	return VisualShaderNode::PORT_TYPE_VECTOR_2D;	
}

int32_t ExampleShaderNode::_get_input_port_count() const {
	return 0;
}

ExampleShaderNode::PortType ExampleShaderNode::_get_input_port_type(int32_t p_port) const {
	return PORT_TYPE_SCALAR;
}

String ExampleShaderNode::_get_input_port_name(int32_t p_port) const {
	return "";
}

int32_t ExampleShaderNode::_get_output_port_count() const {
	return 1;
}

ExampleShaderNode::PortType ExampleShaderNode::_get_output_port_type(int32_t p_port) const {
	return PORT_TYPE_VECTOR_2D;
}

String ExampleShaderNode::_get_output_port_name(int32_t p_port) const {
	return "UV";
}

String ExampleShaderNode::_get_code(Shader::Mode p_mode, VisualShader::Type p_type, int32_t p_id, const String *p_input_vars, const String *p_output_vars, bool p_for_preview) const {
	String code;
	code += "	{\n";

	code += vformat("		%s = UV;\n", p_output_vars[0]);

	code += "	}\n";
	return code;
}

ExampleShaderNode::ExampleShaderNode() {
	
}



void ExampleShaderNode::_bind_methods()
{
    
}

ExampleShaderNode::~ExampleShaderNode()
{
}
