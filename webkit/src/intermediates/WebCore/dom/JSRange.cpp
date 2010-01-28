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
#include "JSRange.h"

#include "ClientRect.h"
#include "ClientRectList.h"
#include "DocumentFragment.h"
#include "JSClientRect.h"
#include "JSClientRectList.h"
#include "JSDocumentFragment.h"
#include "JSNode.h"
#include "JSRange.h"
#include "KURL.h"
#include "Node.h"
#include "Range.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSRange);

/* Hash table */

static const HashTableValue JSRangeTableValues[8] =
{
    { "startContainer", DontDelete|ReadOnly, (intptr_t)jsRangeStartContainer, (intptr_t)0 },
    { "startOffset", DontDelete|ReadOnly, (intptr_t)jsRangeStartOffset, (intptr_t)0 },
    { "endContainer", DontDelete|ReadOnly, (intptr_t)jsRangeEndContainer, (intptr_t)0 },
    { "endOffset", DontDelete|ReadOnly, (intptr_t)jsRangeEndOffset, (intptr_t)0 },
    { "collapsed", DontDelete|ReadOnly, (intptr_t)jsRangeCollapsed, (intptr_t)0 },
    { "commonAncestorContainer", DontDelete|ReadOnly, (intptr_t)jsRangeCommonAncestorContainer, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsRangeConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSRangeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSRangeTableValues, 0 };
#else
    { 18, 15, JSRangeTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSRangeConstructorTableValues[9] =
{
    { "START_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_START, (intptr_t)0 },
    { "START_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_END, (intptr_t)0 },
    { "END_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_END, (intptr_t)0 },
    { "END_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_START, (intptr_t)0 },
    { "NODE_BEFORE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE, (intptr_t)0 },
    { "NODE_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_AFTER, (intptr_t)0 },
    { "NODE_BEFORE_AND_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE_AND_AFTER, (intptr_t)0 },
    { "NODE_INSIDE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_INSIDE, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSRangeConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSRangeConstructorTableValues, 0 };
#else
    { 18, 15, JSRangeConstructorTableValues, 0 };
#endif

class JSRangeConstructor : public DOMConstructorObject {
public:
    JSRangeConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSRangeConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSRangePrototype::self(exec, globalObject), None);
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

const ClassInfo JSRangeConstructor::s_info = { "RangeConstructor", 0, &JSRangeConstructorTable, 0 };

bool JSRangeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeConstructor, DOMObject>(exec, &JSRangeConstructorTable, this, propertyName, slot);
}

bool JSRangeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSRangeConstructor, DOMObject>(exec, &JSRangeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSRangePrototypeTableValues[35] =
{
    { "START_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_START, (intptr_t)0 },
    { "START_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeSTART_TO_END, (intptr_t)0 },
    { "END_TO_END", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_END, (intptr_t)0 },
    { "END_TO_START", DontDelete|ReadOnly, (intptr_t)jsRangeEND_TO_START, (intptr_t)0 },
    { "NODE_BEFORE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE, (intptr_t)0 },
    { "NODE_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_AFTER, (intptr_t)0 },
    { "NODE_BEFORE_AND_AFTER", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_BEFORE_AND_AFTER, (intptr_t)0 },
    { "NODE_INSIDE", DontDelete|ReadOnly, (intptr_t)jsRangeNODE_INSIDE, (intptr_t)0 },
    { "setStart", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetStart, (intptr_t)2 },
    { "setEnd", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetEnd, (intptr_t)2 },
    { "setStartBefore", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetStartBefore, (intptr_t)1 },
    { "setStartAfter", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetStartAfter, (intptr_t)1 },
    { "setEndBefore", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetEndBefore, (intptr_t)1 },
    { "setEndAfter", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSetEndAfter, (intptr_t)1 },
    { "collapse", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCollapse, (intptr_t)1 },
    { "selectNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSelectNode, (intptr_t)1 },
    { "selectNodeContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSelectNodeContents, (intptr_t)1 },
    { "compareBoundaryPoints", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCompareBoundaryPoints, (intptr_t)2 },
    { "deleteContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionDeleteContents, (intptr_t)0 },
    { "extractContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionExtractContents, (intptr_t)0 },
    { "cloneContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCloneContents, (intptr_t)0 },
    { "insertNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionInsertNode, (intptr_t)1 },
    { "surroundContents", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionSurroundContents, (intptr_t)1 },
    { "cloneRange", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCloneRange, (intptr_t)0 },
    { "toString", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionToString, (intptr_t)0 },
    { "detach", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionDetach, (intptr_t)0 },
    { "getClientRects", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionGetClientRects, (intptr_t)0 },
    { "getBoundingClientRect", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionGetBoundingClientRect, (intptr_t)0 },
    { "createContextualFragment", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCreateContextualFragment, (intptr_t)1 },
    { "intersectsNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionIntersectsNode, (intptr_t)1 },
    { "compareNode", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionCompareNode, (intptr_t)1 },
    { "comparePoint", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionComparePoint, (intptr_t)2 },
    { "isPointInRange", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionIsPointInRange, (intptr_t)2 },
    { "expand", DontDelete|Function, (intptr_t)jsRangePrototypeFunctionExpand, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSRangePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1023, JSRangePrototypeTableValues, 0 };
#else
    { 132, 127, JSRangePrototypeTableValues, 0 };
#endif

const ClassInfo JSRangePrototype::s_info = { "RangePrototype", 0, &JSRangePrototypeTable, 0 };

JSObject* JSRangePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRange>(exec, globalObject);
}

bool JSRangePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSRangePrototype, JSObject>(exec, &JSRangePrototypeTable, this, propertyName, slot);
}

bool JSRangePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSRangePrototype, JSObject>(exec, &JSRangePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSRange::s_info = { "Range", 0, &JSRangeTable, 0 };

JSRange::JSRange(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Range> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSRange::~JSRange()
{
    forgetDOMObject(this, impl());
}

JSObject* JSRange::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSRangePrototype(JSRangePrototype::createStructure(globalObject->objectPrototype()));
}

bool JSRange::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRange, Base>(exec, &JSRangeTable, this, propertyName, slot);
}

bool JSRange::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSRange, Base>(exec, &JSRangeTable, this, propertyName, descriptor);
}

JSValue jsRangeStartContainer(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* castedThis = static_cast<JSRange*>(asObject(slot.slotBase()));
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(castedThis->impl());
    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->startContainer(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue jsRangeStartOffset(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* castedThis = static_cast<JSRange*>(asObject(slot.slotBase()));
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(castedThis->impl());
    JSC::JSValue result = jsNumber(exec, imp->startOffset(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue jsRangeEndContainer(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* castedThis = static_cast<JSRange*>(asObject(slot.slotBase()));
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(castedThis->impl());
    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->endContainer(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue jsRangeEndOffset(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* castedThis = static_cast<JSRange*>(asObject(slot.slotBase()));
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(castedThis->impl());
    JSC::JSValue result = jsNumber(exec, imp->endOffset(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue jsRangeCollapsed(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* castedThis = static_cast<JSRange*>(asObject(slot.slotBase()));
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(castedThis->impl());
    JSC::JSValue result = jsBoolean(imp->collapsed(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue jsRangeCommonAncestorContainer(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* castedThis = static_cast<JSRange*>(asObject(slot.slotBase()));
    ExceptionCode ec = 0;
    Range* imp = static_cast<Range*>(castedThis->impl());
    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->commonAncestorContainer(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue jsRangeConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSRange* domObject = static_cast<JSRange*>(asObject(slot.slotBase()));
    return JSRange::getConstructor(exec, domObject->globalObject());
}
JSValue JSRange::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRangeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSetStart(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));
    int offset = args.at(1).toInt32(exec);

    imp->setStart(refNode, offset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSetEnd(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));
    int offset = args.at(1).toInt32(exec);

    imp->setEnd(refNode, offset, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSetStartBefore(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));

    imp->setStartBefore(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSetStartAfter(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));

    imp->setStartAfter(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSetEndBefore(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));

    imp->setEndBefore(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSetEndAfter(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));

    imp->setEndAfter(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionCollapse(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    bool toStart = args.at(0).toBoolean(exec);

    imp->collapse(toStart, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSelectNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));

    imp->selectNode(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSelectNodeContents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));

    imp->selectNodeContents(refNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionCompareBoundaryPoints(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Range::CompareHow how = static_cast<Range::CompareHow>(args.at(0).toInt32(exec));
    Range* sourceRange = toRange(args.at(1));


    JSC::JSValue result = jsNumber(exec, imp->compareBoundaryPoints(how, sourceRange, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionDeleteContents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->deleteContents(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionExtractContents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->extractContents(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionCloneContents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->cloneContents(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionInsertNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* newNode = toNode(args.at(0));

    imp->insertNode(newNode, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionSurroundContents(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* newParent = toNode(args.at(0));

    imp->surroundContents(newParent, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionCloneRange(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->cloneRange(ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionToString(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;


    JSC::JSValue result = jsString(exec, imp->toString(ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionDetach(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;

    imp->detach(ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionGetClientRects(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getClientRects()));
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionGetBoundingClientRect(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getBoundingClientRect()));
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionCreateContextualFragment(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& html = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->createContextualFragment(html, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionIntersectsNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));


    JSC::JSValue result = jsBoolean(imp->intersectsNode(refNode, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionCompareNode(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));


    JSC::JSValue result = jsNumber(exec, imp->compareNode(refNode, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionComparePoint(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));
    int offset = args.at(1).toInt32(exec);


    JSC::JSValue result = jsNumber(exec, imp->comparePoint(refNode, offset, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionIsPointInRange(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    Node* refNode = toNode(args.at(0));
    int offset = args.at(1).toInt32(exec);


    JSC::JSValue result = jsBoolean(imp->isPointInRange(refNode, offset, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue JSC_HOST_CALL jsRangePrototypeFunctionExpand(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSRange::s_info))
        return throwError(exec, TypeError);
    JSRange* castedThisObj = static_cast<JSRange*>(asObject(thisValue));
    Range* imp = static_cast<Range*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& unit = args.at(0).toString(exec);

    imp->expand(unit, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}

// Constant getters

JSValue jsRangeSTART_TO_START(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsRangeSTART_TO_END(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsRangeEND_TO_END(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsRangeEND_TO_START(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValue jsRangeNODE_BEFORE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsRangeNODE_AFTER(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsRangeNODE_BEFORE_AND_AFTER(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsRangeNODE_INSIDE(ExecState* exec, const Identifier&, const PropertySlot&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Range* object)
{
    return getDOMObjectWrapper<JSRange>(exec, globalObject, object);
}
Range* toRange(JSC::JSValue value)
{
    return value.inherits(&JSRange::s_info) ? static_cast<JSRange*>(asObject(value))->impl() : 0;
}

}
