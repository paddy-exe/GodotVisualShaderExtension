#ifndef VS_EXTENSION_CLASS_H
#define VS_EXTENSION_CLASS_H

// We don't need windows.h in this plugin but many others do and it throws up on itself all the time
// So best to include it and make sure CI warns us when we use something Microsoft took for their own goals....
#ifdef WIN32
#include <windows.h>
#endif

#include <godot_cpp/classes/visual_shader_node_custom.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/visual_shader.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/ref.hpp>

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

class ExampleShaderNode : public VisualShaderNodeCustom
{
    GDCLASS(ExampleShaderNode, VisualShaderNodeCustom);

protected:
    static void _bind_methods();

public:
    ExampleShaderNode();
    ~ExampleShaderNode();

    virtual String _get_caption() const;
    virtual String _get_description() const;
    virtual String _get_category() const;
    virtual VisualShaderNode::PortType _get_return_icon_type() const;

	virtual int32_t _get_input_port_count() const;
	virtual PortType _get_input_port_type(int32_t p_port) const;
	virtual String _get_input_port_name(int32_t p_port) const;

	virtual int32_t _get_output_port_count() const;
	virtual PortType _get_output_port_type(int32_t p_port) const;
	virtual String _get_output_port_name(int32_t p_port) const;

	virtual String _get_code(Shader::Mode p_mode, VisualShader::Type p_type, int32_t p_id, const String *p_input_vars, const String *p_output_vars, bool p_for_preview = false) const;
};

#endif // VS_EXTENSION_CLASS_H