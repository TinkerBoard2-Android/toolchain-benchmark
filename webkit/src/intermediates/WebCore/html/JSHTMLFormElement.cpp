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
#include "JSHTMLFormElement.h"

#include "AtomicString.h"
#include "HTMLCollection.h"
#include "HTMLFormElement.h"
#include "JSHTMLCollection.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLFormElement);

/* Hash table */

static const HashTableValue JSHTMLFormElementTableValues[12] =
{
    { "elements", DontDelete|ReadOnly, (intptr_t)jsHTMLFormElementElements, (intptr_t)0 },
    { "length", DontDelete|ReadOnly, (intptr_t)jsHTMLFormElementLength, (intptr_t)0 },
    { "name", DontDelete, (intptr_t)jsHTMLFormElementName, (intptr_t)setJSHTMLFormElementName },
    { "noValidate", DontDelete, (intptr_t)jsHTMLFormElementNoValidate, (intptr_t)setJSHTMLFormElementNoValidate },
    { "acceptCharset", DontDelete, (intptr_t)jsHTMLFormElementAcceptCharset, (intptr_t)setJSHTMLFormElementAcceptCharset },
    { "action", DontDelete, (intptr_t)jsHTMLFormElementAction, (intptr_t)setJSHTMLFormElementAction },
    { "encoding", DontDelete, (intptr_t)jsHTMLFormElementEncoding, (intptr_t)setJSHTMLFormElementEncoding },
    { "enctype", DontDelete, (intptr_t)jsHTMLFormElementEnctype, (intptr_t)setJSHTMLFormElementEnctype },
    { "method", DontDelete, (intptr_t)jsHTMLFormElementMethod, (intptr_t)setJSHTMLFormElementMethod },
    { "target", DontDelete, (intptr_t)jsHTMLFormElementTarget, (intptr_t)setJSHTMLFormElementTarget },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLFormElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLFormElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 4095, JSHTMLFormElementTableValues, 0 };
#else
    { 35, 31, JSHTMLFormElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLFormElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLFormElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLFormElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLFormElementConstructorTableValues, 0 };
#endif

class JSHTMLFormElementConstructor : public DOMConstructorObject {
public:
    JSHTMLFormElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLFormElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLFormElementPrototype::self(exec, globalObject), None);
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

const ClassInfo JSHTMLFormElementConstructor::s_info = { "HTMLFormElementConstructor", 0, &JSHTMLFormElementConstructorTable, 0 };

bool JSHTMLFormElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFormElementConstructor, DOMObject>(exec, &JSHTMLFormElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLFormElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLFormElementConstructor, DOMObject>(exec, &JSHTMLFormElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFormElementPrototypeTableValues[4] =
{
    { "submit", DontDelete|Function, (intptr_t)jsHTMLFormElementPrototypeFunctionSubmit, (intptr_t)0 },
    { "reset", DontDelete|Function, (intptr_t)jsHTMLFormElementPrototypeFunctionReset, (intptr_t)0 },
    { "checkValidity", DontDelete|Function, (intptr_t)jsHTMLFormElementPrototypeFunctionCheckValidity, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLFormElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSHTMLFormElementPrototypeTableValues, 0 };
#else
    { 9, 7, JSHTMLFormElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLFormElementPrototype::s_info = { "HTMLFormElementPrototype", 0, &JSHTMLFormElementPrototypeTable, 0 };

JSObject* JSHTMLFormElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLFormElement>(exec, globalObject);
}

bool JSHTMLFormElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLFormElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLFormElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLFormElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLFormElement::s_info = { "HTMLFormElement", &JSHTMLElement::s_info, &JSHTMLFormElementTable, 0 };

JSHTMLFormElement::JSHTMLFormElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFormElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLFormElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLFormElementPrototype(JSHTMLFormElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLFormElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<HTMLFormElement*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLFormElement*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    const HashEntry* entry = JSHTMLFormElementTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    return getStaticValueSlot<JSHTMLFormElement, Base>(exec, &JSHTMLFormElementTable, this, propertyName, slot);
}

bool JSHTMLFormElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<HTMLFormElement*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLFormElement*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    const HashEntry* entry = JSHTMLFormElementTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    return getStaticValueDescriptor<JSHTMLFormElement, Base>(exec, &JSHTMLFormElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLFormElementElements(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->elements()));
}

JSValue jsHTMLFormElementLength(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsNumber(exec, imp->length());
}

JSValue jsHTMLFormElementName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->name());
}

JSValue jsHTMLFormElementNoValidate(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsBoolean(imp->noValidate());
}

JSValue jsHTMLFormElementAcceptCharset(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->acceptCharset());
}

JSValue jsHTMLFormElementAction(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->action());
}

JSValue jsHTMLFormElementEncoding(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->encoding());
}

JSValue jsHTMLFormElementEnctype(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->enctype());
}

JSValue jsHTMLFormElementMethod(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->method());
}

JSValue jsHTMLFormElementTarget(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* castedThis = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThis->impl());
    return jsString(exec, imp->target());
}

JSValue jsHTMLFormElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* domObject = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    return JSHTMLFormElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLFormElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLFormElement, Base>(exec, propertyName, value, &JSHTMLFormElementTable, this, slot);
}

void setJSHTMLFormElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFormElementNoValidate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setNoValidate(value.toBoolean(exec));
}

void setJSHTMLFormElementAcceptCharset(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setAcceptCharset(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFormElementAction(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setAction(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFormElementEncoding(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setEncoding(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFormElementEnctype(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setEnctype(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFormElementMethod(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setMethod(valueToStringWithNullCheck(exec, value));
}

void setJSHTMLFormElementTarget(ExecState* exec, JSObject* thisObject, JSValue value)
{
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(static_cast<JSHTMLFormElement*>(thisObject)->impl());
    imp->setTarget(valueToStringWithNullCheck(exec, value));
}

void JSHTMLFormElement::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<HTMLFormElement*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames);
}

JSValue JSHTMLFormElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLFormElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionSubmit(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLFormElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLFormElement* castedThisObj = static_cast<JSHTMLFormElement*>(asObject(thisValue));
    return castedThisObj->submit(exec, args);
}

JSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionReset(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLFormElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLFormElement* castedThisObj = static_cast<JSHTMLFormElement*>(asObject(thisValue));
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThisObj->impl());

    imp->reset();
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsHTMLFormElementPrototypeFunctionCheckValidity(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSHTMLFormElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLFormElement* castedThisObj = static_cast<JSHTMLFormElement*>(asObject(thisValue));
    HTMLFormElement* imp = static_cast<HTMLFormElement*>(castedThisObj->impl());


    JSC::JSValue result = jsBoolean(imp->checkValidity());
    return result;
}


JSValue JSHTMLFormElement::indexGetter(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSHTMLFormElement* thisObj = static_cast<JSHTMLFormElement*>(asObject(slot.slotBase()));
    return toJS(exec, thisObj->globalObject(), static_cast<HTMLFormElement*>(thisObj->impl())->item(slot.index()));
}

}