﻿// Generated wrapper code for package TShort

#include "OcctPCH.h"
#include "TShort.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal
//---------------------------------------------------------------------

RDC::OCC::TShort_Array1OfShortReal::TShort_Array1OfShortReal()
	: RDC::OCC::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array1OfShortReal();
}

RDC::OCC::TShort_Array1OfShortReal::TShort_Array1OfShortReal(int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array1OfShortReal(theLower, theUpper);
}

RDC::OCC::TShort_Array1OfShortReal::TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper, bool theUseBuffer)
	: RDC::OCC::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<float> pp_theBegin = &theBegin;
	_NativeInstance = new ::TShort_Array1OfShortReal(*(float*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

RDC::OCC::TShort_Array1OfShortReal::TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper)
	: RDC::OCC::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<float> pp_theBegin = &theBegin;
	_NativeInstance = new ::TShort_Array1OfShortReal(*(float*)pp_theBegin, theLower, theUpper, true);
}

void RDC::OCC::TShort_Array1OfShortReal::Init(float theValue)
{
	pin_ptr<float> pp_theValue = &theValue;
	((::TShort_Array1OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

int RDC::OCC::TShort_Array1OfShortReal::Size()
{
	int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TShort_Array1OfShortReal::Length()
{
	int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TShort_Array1OfShortReal::IsEmpty()
{
	bool _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TShort_Array1OfShortReal::Lower()
{
	int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TShort_Array1OfShortReal::Upper()
{
	int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TShort_Array1OfShortReal^ RDC::OCC::TShort_Array1OfShortReal::Assign(RDC::OCC::TShort_Array1OfShortReal^ theOther)
{
	::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
	*_result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Assign(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array1OfShortReal(_result);
}

RDC::OCC::TShort_Array1OfShortReal^ RDC::OCC::TShort_Array1OfShortReal::Move(RDC::OCC::TShort_Array1OfShortReal^ theOther)
{
	::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
	*_result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Move(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array1OfShortReal(_result);
}

float RDC::OCC::TShort_Array1OfShortReal::First()
{
	float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->First();
	return _result;
}

float RDC::OCC::TShort_Array1OfShortReal::Last()
{
	float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Last();
	return _result;
}

float RDC::OCC::TShort_Array1OfShortReal::Value(int theIndex)
{
	float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

float RDC::OCC::TShort_Array1OfShortReal::ChangeValue(int theIndex)
{
	float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TShort_Array1OfShortReal::SetValue(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_Array1OfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

void RDC::OCC::TShort_Array1OfShortReal::UpdateLowerBound(int theLower)
{
	((::TShort_Array1OfShortReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TShort_Array1OfShortReal::UpdateUpperBound(int theUpper)
{
	((::TShort_Array1OfShortReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TShort_Array1OfShortReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TShort_Array1OfShortReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TShort_Array1OfShortReal::IsDeletable()
{
	bool _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->IsDeletable();
	return _result;
}

System::Collections::Generic::IEnumerator<float>^ RDC::OCC::TShort_Array1OfShortReal::GetEnumerator()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TShort_Array1OfShortReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal
//---------------------------------------------------------------------

RDC::OCC::TShort_Array2OfShortReal::TShort_Array2OfShortReal()
	: RDC::OCC::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array2OfShortReal();
}

RDC::OCC::TShort_Array2OfShortReal::TShort_Array2OfShortReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array2OfShortReal(theRowLower, theRowUpper, theColLower, theColUpper);
}

RDC::OCC::TShort_Array2OfShortReal::TShort_Array2OfShortReal(float theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: RDC::OCC::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<float> pp_theBegin = &theBegin;
	_NativeInstance = new ::TShort_Array2OfShortReal(*(float*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int RDC::OCC::TShort_Array2OfShortReal::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TShort_Array2OfShortReal::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TShort_Array2OfShortReal::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::Size()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::Length()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::NbRows()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::NbColumns()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::RowLength()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::ColLength()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::LowerRow()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::UpperRow()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::LowerCol()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::UpperCol()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TShort_Array2OfShortReal^ RDC::OCC::TShort_Array2OfShortReal::Assign(RDC::OCC::TShort_Array2OfShortReal^ theOther)
{
	::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
	*_result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Assign(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array2OfShortReal(_result);
}

RDC::OCC::TShort_Array2OfShortReal^ RDC::OCC::TShort_Array2OfShortReal::Move(RDC::OCC::TShort_Array2OfShortReal^ theOther)
{
	::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
	*_result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Move(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array2OfShortReal(_result);
}

float RDC::OCC::TShort_Array2OfShortReal::Value(int theRow, int theCol)
{
	float _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

float RDC::OCC::TShort_Array2OfShortReal::ChangeValue(int theRow, int theCol)
{
	float _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TShort_Array2OfShortReal::SetValue(int theRow, int theCol, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_Array2OfShortReal*)_NativeInstance)->SetValue(theRow, theCol, *(float*)pp_theItem);
}

void RDC::OCC::TShort_Array2OfShortReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TShort_Array2OfShortReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TShort_Array2OfShortReal::Init(float theValue)
{
	pin_ptr<float> pp_theValue = &theValue;
	((::TShort_Array2OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

bool RDC::OCC::TShort_Array2OfShortReal::IsEmpty()
{
	bool _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::Lower()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TShort_Array2OfShortReal::Upper()
{
	int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Upper();
	return _result;
}

float RDC::OCC::TShort_Array2OfShortReal::First()
{
	float _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->First();
	return _result;
}

float RDC::OCC::TShort_Array2OfShortReal::Last()
{
	float _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TShort_Array2OfShortReal::UpdateLowerBound(int theLower)
{
	((::TShort_Array2OfShortReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TShort_Array2OfShortReal::UpdateUpperBound(int theUpper)
{
	((::TShort_Array2OfShortReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TShort_Array2OfShortReal::IsDeletable()
{
	bool _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->IsDeletable();
	return _result;
}



//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal
//---------------------------------------------------------------------

RDC::OCC::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal()
	: RDC::OCC::BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_SequenceOfShortReal();
}

RDC::OCC::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_SequenceOfShortReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TShort_SequenceOfShortReal::Size()
{
	int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TShort_SequenceOfShortReal::Length()
{
	int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TShort_SequenceOfShortReal::Lower()
{
	int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TShort_SequenceOfShortReal::Upper()
{
	int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TShort_SequenceOfShortReal::IsEmpty()
{
	bool _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TShort_SequenceOfShortReal::Reverse()
{
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Reverse();
}

void RDC::OCC::TShort_SequenceOfShortReal::Exchange(int I, int J)
{
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TShort_SequenceOfShortReal::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TShort_SequenceOfShortReal::Clear()
{
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TShort_SequenceOfShortReal^ RDC::OCC::TShort_SequenceOfShortReal::Assign(RDC::OCC::TShort_SequenceOfShortReal^ theOther)
{
	::TShort_SequenceOfShortReal* _result = new ::TShort_SequenceOfShortReal();
	*_result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Assign(*(::TShort_SequenceOfShortReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_SequenceOfShortReal(_result);
}

void RDC::OCC::TShort_SequenceOfShortReal::Remove(RDC::OCC::TShort_SequenceOfShortReal::Iterator^ thePosition)
{
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Remove(*(::TShort_SequenceOfShortReal::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TShort_SequenceOfShortReal::Append(float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Append(*(float*)pp_theItem);
}

void RDC::OCC::TShort_SequenceOfShortReal::Prepend(float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Prepend(*(float*)pp_theItem);
}

void RDC::OCC::TShort_SequenceOfShortReal::InsertBefore(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(float*)pp_theItem);
}

void RDC::OCC::TShort_SequenceOfShortReal::InsertAfter(RDC::OCC::TShort_SequenceOfShortReal::Iterator^ thePosition, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertAfter(*(::TShort_SequenceOfShortReal::Iterator*)thePosition->NativeInstance, *(float*)pp_theItem);
}

void RDC::OCC::TShort_SequenceOfShortReal::Split(int theIndex, RDC::OCC::TShort_SequenceOfShortReal^ theSeq)
{
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Split(theIndex, *(::TShort_SequenceOfShortReal*)theSeq->NativeInstance);
}

float RDC::OCC::TShort_SequenceOfShortReal::First()
{
	float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->First();
	return _result;
}

float RDC::OCC::TShort_SequenceOfShortReal::Last()
{
	float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Last();
	return _result;
}

float RDC::OCC::TShort_SequenceOfShortReal::Value(int theIndex)
{
	float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

float RDC::OCC::TShort_SequenceOfShortReal::ChangeValue(int theIndex)
{
	float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TShort_SequenceOfShortReal::SetValue(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

System::Collections::Generic::IEnumerator<float>^ RDC::OCC::TShort_SequenceOfShortReal::GetEnumerator()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TShort_SequenceOfShortReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TShort_SequenceOfShortReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TShort_SequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_SequenceOfShortReal::Iterator();
}

bool RDC::OCC::TShort_SequenceOfShortReal::Iterator::More()
{
	bool _result = ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TShort_SequenceOfShortReal::Iterator::Next()
{
	((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->Next();
}

float RDC::OCC::TShort_SequenceOfShortReal::Iterator::Value()
{
	float _result = ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TShort_SequenceOfShortReal::Iterator::IsEqual(RDC::OCC::TShort_SequenceOfShortReal::Iterator^ theOther)
{
	bool _result = ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->IsEqual(*(::TShort_SequenceOfShortReal::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TShort_SequenceOfShortReal::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TShort_SequenceOfShortReal::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  TShort_HArray1OfShortReal
//---------------------------------------------------------------------

RDC::OCC::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HArray1OfShortReal();
}

RDC::OCC::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(int theLower, int theUpper)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HArray1OfShortReal(theLower, theUpper);
}

RDC::OCC::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(int theLower, int theUpper, float theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<float> pp_theValue = &theValue;
	NativeInstance = new ::TShort_HArray1OfShortReal(theLower, theUpper, *(float*)pp_theValue);
}

RDC::OCC::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(float theBegin, int theLower, int theUpper, bool parameter1)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<float> pp_theBegin = &theBegin;
	NativeInstance = new ::TShort_HArray1OfShortReal(*(float*)pp_theBegin, theLower, theUpper, parameter1);
}

RDC::OCC::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(RDC::OCC::TShort_Array1OfShortReal^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HArray1OfShortReal(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
}

RDC::OCC::TShort_Array1OfShortReal^ RDC::OCC::TShort_HArray1OfShortReal::Array1()
{
	::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
	*_result = (::TShort_Array1OfShortReal)((::TShort_HArray1OfShortReal*)_NativeInstance)->Array1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array1OfShortReal(_result);
}

RDC::OCC::TShort_Array1OfShortReal^ RDC::OCC::TShort_HArray1OfShortReal::ChangeArray1()
{
	::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
	*_result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeArray1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array1OfShortReal(_result);
}

void RDC::OCC::TShort_HArray1OfShortReal::Init(float theValue)
{
	pin_ptr<float> pp_theValue = &theValue;
	((::TShort_HArray1OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

int RDC::OCC::TShort_HArray1OfShortReal::Size()
{
	int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TShort_HArray1OfShortReal::Length()
{
	int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Length();
	return _result;
}

bool RDC::OCC::TShort_HArray1OfShortReal::IsEmpty()
{
	bool _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TShort_HArray1OfShortReal::Lower()
{
	int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TShort_HArray1OfShortReal::Upper()
{
	int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Upper();
	return _result;
}

RDC::OCC::TShort_HArray1OfShortReal^ RDC::OCC::TShort_HArray1OfShortReal::Assign(RDC::OCC::TShort_HArray1OfShortReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TShort_HArray1OfShortReal^ RDC::OCC::TShort_HArray1OfShortReal::Move(RDC::OCC::TShort_HArray1OfShortReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

float RDC::OCC::TShort_HArray1OfShortReal::First()
{
	float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->First();
	return _result;
}

float RDC::OCC::TShort_HArray1OfShortReal::Last()
{
	float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Last();
	return _result;
}

float RDC::OCC::TShort_HArray1OfShortReal::Value(int theIndex)
{
	float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

float RDC::OCC::TShort_HArray1OfShortReal::ChangeValue(int theIndex)
{
	float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TShort_HArray1OfShortReal::SetValue(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HArray1OfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

void RDC::OCC::TShort_HArray1OfShortReal::UpdateLowerBound(int theLower)
{
	((::TShort_HArray1OfShortReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TShort_HArray1OfShortReal::UpdateUpperBound(int theUpper)
{
	((::TShort_HArray1OfShortReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::TShort_HArray1OfShortReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TShort_HArray1OfShortReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::TShort_HArray1OfShortReal::IsDeletable()
{
	bool _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TShort_HArray1OfShortReal^ RDC::OCC::TShort_HArray1OfShortReal::CreateDowncasted(::TShort_HArray1OfShortReal* instance)
{
	return gcnew RDC::OCC::TShort_HArray1OfShortReal(instance);
}

System::Collections::Generic::IEnumerator<float>^ RDC::OCC::TShort_HArray1OfShortReal::GetEnumerator()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TShort_HArray1OfShortReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_HArray1OfShortReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TShort_HArray2OfShortReal
//---------------------------------------------------------------------

RDC::OCC::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HArray2OfShortReal(theRowLow, theRowUpp, theColLow, theColUpp);
}

RDC::OCC::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, float theValue)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<float> pp_theValue = &theValue;
	NativeInstance = new ::TShort_HArray2OfShortReal(theRowLow, theRowUpp, theColLow, theColUpp, *(float*)pp_theValue);
}

RDC::OCC::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(RDC::OCC::TShort_Array2OfShortReal^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HArray2OfShortReal(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
}

RDC::OCC::TShort_Array2OfShortReal^ RDC::OCC::TShort_HArray2OfShortReal::Array2()
{
	::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
	*_result = (::TShort_Array2OfShortReal)((::TShort_HArray2OfShortReal*)_NativeInstance)->Array2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array2OfShortReal(_result);
}

RDC::OCC::TShort_Array2OfShortReal^ RDC::OCC::TShort_HArray2OfShortReal::ChangeArray2()
{
	::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
	*_result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeArray2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_Array2OfShortReal(_result);
}

int RDC::OCC::TShort_HArray2OfShortReal::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
	int _result = ::TShort_HArray2OfShortReal::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
	int _result = ::TShort_HArray2OfShortReal::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::Size()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::Length()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::NbRows()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->NbRows();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::NbColumns()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->NbColumns();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::RowLength()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->RowLength();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::ColLength()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->ColLength();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::LowerRow()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->LowerRow();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::UpperRow()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->UpperRow();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::LowerCol()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->LowerCol();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::UpperCol()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->UpperCol();
	return _result;
}

RDC::OCC::TShort_HArray2OfShortReal^ RDC::OCC::TShort_HArray2OfShortReal::Assign(RDC::OCC::TShort_HArray2OfShortReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TShort_HArray2OfShortReal^ RDC::OCC::TShort_HArray2OfShortReal::Move(RDC::OCC::TShort_HArray2OfShortReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

float RDC::OCC::TShort_HArray2OfShortReal::Value(int theRow, int theCol)
{
	float _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

float RDC::OCC::TShort_HArray2OfShortReal::ChangeValue(int theRow, int theCol)
{
	float _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeValue(theRow, theCol);
	return _result;
}

void RDC::OCC::TShort_HArray2OfShortReal::SetValue(int theRow, int theCol, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HArray2OfShortReal*)_NativeInstance)->SetValue(theRow, theCol, *(float*)pp_theItem);
}

void RDC::OCC::TShort_HArray2OfShortReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TShort_HArray2OfShortReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void RDC::OCC::TShort_HArray2OfShortReal::Init(float theValue)
{
	pin_ptr<float> pp_theValue = &theValue;
	((::TShort_HArray2OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

bool RDC::OCC::TShort_HArray2OfShortReal::IsEmpty()
{
	bool _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->IsEmpty();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::Lower()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TShort_HArray2OfShortReal::Upper()
{
	int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Upper();
	return _result;
}

float RDC::OCC::TShort_HArray2OfShortReal::First()
{
	float _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->First();
	return _result;
}

float RDC::OCC::TShort_HArray2OfShortReal::Last()
{
	float _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Last();
	return _result;
}

void RDC::OCC::TShort_HArray2OfShortReal::UpdateLowerBound(int theLower)
{
	((::TShort_HArray2OfShortReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::TShort_HArray2OfShortReal::UpdateUpperBound(int theUpper)
{
	((::TShort_HArray2OfShortReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool RDC::OCC::TShort_HArray2OfShortReal::IsDeletable()
{
	bool _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->IsDeletable();
	return _result;
}

RDC::OCC::TShort_HArray2OfShortReal^ RDC::OCC::TShort_HArray2OfShortReal::CreateDowncasted(::TShort_HArray2OfShortReal* instance)
{
	return gcnew RDC::OCC::TShort_HArray2OfShortReal(instance);
}



//---------------------------------------------------------------------
//  Class  TShort_HArray2OfShortReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TShort_HSequenceOfShortReal
//---------------------------------------------------------------------

RDC::OCC::TShort_HSequenceOfShortReal::TShort_HSequenceOfShortReal()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HSequenceOfShortReal();
}

RDC::OCC::TShort_HSequenceOfShortReal::TShort_HSequenceOfShortReal(RDC::OCC::TShort_SequenceOfShortReal^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TShort_HSequenceOfShortReal(*(::TShort_SequenceOfShortReal*)theOther->NativeInstance);
}

RDC::OCC::TShort_SequenceOfShortReal^ RDC::OCC::TShort_HSequenceOfShortReal::Sequence()
{
	::TShort_SequenceOfShortReal* _result = new ::TShort_SequenceOfShortReal();
	*_result = (::TShort_SequenceOfShortReal)((::TShort_HSequenceOfShortReal*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_SequenceOfShortReal(_result);
}

void RDC::OCC::TShort_HSequenceOfShortReal::Append(float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Append(*(float*)pp_theItem);
}

void RDC::OCC::TShort_HSequenceOfShortReal::Append(RDC::OCC::TShort_SequenceOfShortReal^ theSequence)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Append(*(::TShort_SequenceOfShortReal*)theSequence->NativeInstance);
}

RDC::OCC::TShort_SequenceOfShortReal^ RDC::OCC::TShort_HSequenceOfShortReal::ChangeSequence()
{
	::TShort_SequenceOfShortReal* _result = new ::TShort_SequenceOfShortReal();
	*_result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TShort_SequenceOfShortReal(_result);
}

int RDC::OCC::TShort_HSequenceOfShortReal::Size()
{
	int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::TShort_HSequenceOfShortReal::Length()
{
	int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::TShort_HSequenceOfShortReal::Lower()
{
	int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::TShort_HSequenceOfShortReal::Upper()
{
	int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::TShort_HSequenceOfShortReal::IsEmpty()
{
	bool _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::TShort_HSequenceOfShortReal::Reverse()
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Reverse();
}

void RDC::OCC::TShort_HSequenceOfShortReal::Exchange(int I, int J)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::TShort_HSequenceOfShortReal::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TShort_HSequenceOfShortReal::Clear()
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TShort_HSequenceOfShortReal^ RDC::OCC::TShort_HSequenceOfShortReal::Assign(RDC::OCC::TShort_HSequenceOfShortReal^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::TShort_HSequenceOfShortReal::Remove(RDC::OCC::TShort_HSequenceOfShortReal::Iterator^ thePosition)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Remove(*(::TShort_HSequenceOfShortReal::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::TShort_HSequenceOfShortReal::Prepend(float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Prepend(*(float*)pp_theItem);
}

void RDC::OCC::TShort_HSequenceOfShortReal::InsertBefore(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(float*)pp_theItem);
}

void RDC::OCC::TShort_HSequenceOfShortReal::InsertAfter(RDC::OCC::TShort_HSequenceOfShortReal::Iterator^ thePosition, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertAfter(*(::TShort_HSequenceOfShortReal::Iterator*)thePosition->NativeInstance, *(float*)pp_theItem);
}

void RDC::OCC::TShort_HSequenceOfShortReal::Split(int theIndex, RDC::OCC::TShort_HSequenceOfShortReal^ theSeq)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Split(theIndex, *(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance);
}

float RDC::OCC::TShort_HSequenceOfShortReal::First()
{
	float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->First();
	return _result;
}

float RDC::OCC::TShort_HSequenceOfShortReal::Last()
{
	float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Last();
	return _result;
}

float RDC::OCC::TShort_HSequenceOfShortReal::Value(int theIndex)
{
	float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Value(theIndex);
	return _result;
}

float RDC::OCC::TShort_HSequenceOfShortReal::ChangeValue(int theIndex)
{
	float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result;
}

void RDC::OCC::TShort_HSequenceOfShortReal::SetValue(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

RDC::OCC::TShort_HSequenceOfShortReal^ RDC::OCC::TShort_HSequenceOfShortReal::CreateDowncasted(::TShort_HSequenceOfShortReal* instance)
{
	return gcnew RDC::OCC::TShort_HSequenceOfShortReal(instance);
}

System::Collections::Generic::IEnumerator<float>^ RDC::OCC::TShort_HSequenceOfShortReal::GetEnumerator()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::TShort_HSequenceOfShortReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_HSequenceOfShortReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::TShort_HSequenceOfShortReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::TShort_HSequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_HSequenceOfShortReal::Iterator();
}

bool RDC::OCC::TShort_HSequenceOfShortReal::Iterator::More()
{
	bool _result = ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::TShort_HSequenceOfShortReal::Iterator::Next()
{
	((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->Next();
}

float RDC::OCC::TShort_HSequenceOfShortReal::Iterator::Value()
{
	float _result = ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->Value();
	return _result;
}

bool RDC::OCC::TShort_HSequenceOfShortReal::Iterator::IsEqual(RDC::OCC::TShort_HSequenceOfShortReal::Iterator^ theOther)
{
	bool _result = ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->IsEqual(*(::TShort_HSequenceOfShortReal::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::TShort_HSequenceOfShortReal::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::TShort_HSequenceOfShortReal::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}


