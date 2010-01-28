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

#include "config.h"
#include "JSHTMLAnchorElement.h"

#include "HTMLAnchorElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLAnchorElement);

/* Hash table */

static const HashTableValue JSHTMLAnchorElementTableValues[21] =
{
    { "accessKey", DontDelete, (intptr_t)jsHTMLAnchorElementAccessKey, (intptr_t)setJSHTMLAnchorElementAccessKey },
    { "charset", DontDelete, (intptr_t)jsHTMLAnchorElementCharset, (intptr_t)setJSHTMLAnchorElementCharset },
    { "coords", DontDelete, (intptr_t)jsHTMLAnchorElementCoords, (intptr_t)setJSHTMLAnchorElementCoords },
    { "href", DontDelete, (intptr_t)jsHTMLAnchorElementHref, (intptr_t)setJSHTMLAnchorElementHref },
    { "hreflang", DontDelete, (intptr_t)jsHTMLAnchorElementHreflang, (intptr_t)setJSHTMLAnchorElementHreflang },
    { "name", DontDelete, (intptr_t)jsHTMLAnchorElementName, (intptr_t)setJSHTMLAnchorElementName },
    { "rel", DontDelete, (intptr_t)jsHTMLAnchorElementRel, (intptr_t)setJSHTMLAnchorElementRel },
    { "rev", DontDelete, (intptr_t)jsHTMLAnchorElementRev, (intptr_t)setJSHTMLAnchorElementRev },
    { "shape", DontDelete, (intptr_t)jsHTMLAnchorElementShape, (intptr_t)setJSHTMLAnchorElementShape },
    { "target", DontDelete, (intptr_t)jsHTMLAnchorElementTarget, (intptr_t)setJSHTMLAnchorElementTarget },
    { "type", DontDelete, (intptr_t)jsHTMLAnchorElementType, (intptr_t)setJSHTMLAnchorElementType },
    { "hash", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementHash, (intptr_t)0 },
    { "host", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementHost, (intptr_t)0 },
    { "hostname", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementHostname, (intptr_t)0 },
    { "pathname", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementPathname, (intptr_t)0 },
    { "port", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementPort, (intptr_t)0 },
    { "protocol", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementProtocol, (intptr_t)0 },
    { "search", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementSearch, (intptr_t)0 },
    { "text", DontDelete|ReadOnly, (intptr_t)jsHTMLAnchorElementText, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLAnchorElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLAnchorElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSHTMLAnchorElementTableValues, 0 };
#else
    { 67, 63, JSHTMLAnchorElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLAnchorElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLAnchorElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLAnchorElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLAnchorElementConstructorTableValues, 0 };
#endif

class JSHTMLAnchorElementConstructor : public DOMConstructorObject {
public:
    JSHTMLAnchorElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLAnchorElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLAnchorElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags)); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLAnchorElementConstructor::s_info = { "HTMLAnchorElementConstructor", 0, &JSHTMLAnchorElementConstructorTable, 0 };

bool JSHTMLAnchorElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAnchorElementConstructor, DOMObject>(exec, &JSHTMLAnchorElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLAnchorElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLAnchorElementConstructor, DOMObject>(exec, &JSHTMLAnchorElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAnchorElementPrototypeTableValues[2] =
{
    { "toString", DontDelete|DontEnum|Function, (intptr_t)jsHTMLAnchorElementPrototypeFunctionToString, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLAnchorElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLAnchorElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSHTMLAnchorElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLAnchorElementPrototype::s_info = { "HTMLAnchorElementPrototype", 0, &JSHTMLAnchorElementPrototypeTable, 0 };

JSObject* JSHTMLAnchorElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAnchorElement>(exec, globalObject);
}

bool JSHTMLAnchorElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLAnchorElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLAnchorElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLAnchorElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLAnchorElement::s_info = { "HTMLAnchorElement", &JSHTMLElement::s_info, &JSHTMLAnchorElementTable, 0 };

JSHTMLAnchorElement::JSHTMLAnchorElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAnchorElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLAnchorElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLAnchorElementPrototype(JSHTMLAnchorElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLAnchorElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAnchorElement, Base>(exec, &JSHTMLAnchorElementTable, this, propertyName, slot);
}

bool JSHTMLAnchorElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLAnchorElement, Base>(exec, &JSHTMLAnchorElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLAnchorElementAccessKey(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::accesskeyAttr));
}

JSValue jsHTMLAnchorElementCharset(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::charsetAttr));
}

JSValue jsHTMLAnchorElementCoords(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::coordsAttr));
}

JSValue jsHTMLAnchorElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getURLAttribute(HTMLNames::hrefAttr));
}

JSValue jsHTMLAnchorElementHreflang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::hreflangAttr));
}

JSValue jsHTMLAnchorElementName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::nameAttr));
}

JSValue jsHTMLAnchorElementRel(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::relAttr));
}

JSValue jsHTMLAnchorElementRev(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::revAttr));
}

JSValue jsHTMLAnchorElementShape(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::shapeAttr));
}

JSValue jsHTMLAnchorElementTarget(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::targetAttr));
}

JSValue jsHTMLAnchorElementType(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->getAttribute(HTMLNames::typeAttr));
}

JSValue jsHTMLAnchorElementHash(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->hash());
}

JSValue jsHTMLAnchorElementHost(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->host());
}

JSValue jsHTMLAnchorElementHostname(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->hostname());
}

JSValue jsHTMLAnchorElementPathname(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->pathname());
}

JSValue jsHTMLAnchorElementPort(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->port());
}

JSValue jsHTMLAnchorElementProtocol(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->protocol());
}

JSValue jsHTMLAnchorElementSearch(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->search());
}

JSValue jsHTMLAnchorElementText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* castedThis = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThis->impl());
    return jsString(exec, imp->text());
}

JSValue jsHTMLAnchorElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLAnchorElement* domObject = static_cast<JSHTMLAnchorElement*>(asObject(slot.slotBase()));
    return JSHTMLAnchorElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLAnchorElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLAnchorElement, Base>(exec, propertyName, value, &JSHTMLAnchorElementTable, this, slot);
}

void setJSHTMLAnchorElementAccessKey(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::accesskeyAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementCharset(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::charsetAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementCoords(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::coordsAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementHref(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::hrefAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementHreflang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::hreflangAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementRel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::relAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementRev(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::revAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementShape(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::shapeAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementTarget(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::targetAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLAnchorElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(static_cast<JSHTMLAnchorElement*>(thisObject)->impl());
    imp->setAttribute(HTMLNames::typeAttr, valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLAnchorElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAnchorElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsHTMLAnchorElementPrototypeFunctionToString(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLAnchorElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLAnchorElement* castedThisObj = static_cast<JSHTMLAnchorElement*>(asObject(thisValue));
    HTMLAnchorElement* imp = static_cast<HTMLAnchorElement*>(castedThisObj->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return result;
}


}
