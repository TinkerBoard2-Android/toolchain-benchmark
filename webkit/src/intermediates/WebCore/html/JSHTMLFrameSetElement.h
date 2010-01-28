/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLFrameSetElement_h
#define JSHTMLFrameSetElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLFrameSetElement;

class JSHTMLFrameSetElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLFrameSetElement(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<HTMLFrameSetElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFrameSetElement*, const JSC::Identifier&);
    static JSC::JSValue nameGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
};


class JSHTMLFrameSetElementPrototype : public JSC::JSObject {
    typedef JSC::JSObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags));
    }
    JSHTMLFrameSetElementPrototype(NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsHTMLFrameSetElementCols(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementCols(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementRows(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementRows(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnbeforeunload(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnbeforeunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnhashchange(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnhashchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnmessage(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnmessage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnoffline(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnoffline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnonline(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnonline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnresize(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnresize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnstorage(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnstorage(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnunload(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementOnorientationchange(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFrameSetElementOnorientationchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLFrameSetElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
