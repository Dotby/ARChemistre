﻿#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1898;
// System.Collections.Stack
struct Stack_t1147;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t1899  : public SmallXmlParser_t1900
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1898 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1898 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1147 * ___stack_15;
};