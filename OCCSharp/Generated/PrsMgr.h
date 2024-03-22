﻿// Generated wrapper code for package PrsMgr

#pragma once

#include "NCollection.h"
#include "Graphic3d.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Enum  PrsMgr_DisplayStatus
//---------------------------------------------------------------------
/// <summary>
/// To give the display status of an Interactive Object.
/// </summary>
public enum class PrsMgr_DisplayStatus
{
    Displayed = 0,
    Erased = 1,
    None = 2,
    AIS_DS_Displayed = 0,
    AIS_DS_Erased = 1,
    AIS_DS_None = 2
}; // enum  class PrsMgr_DisplayStatus

//---------------------------------------------------------------------
//  Enum  PrsMgr_TypeOfPresentation3d
//---------------------------------------------------------------------
/// <summary>
/// The type of presentation.
/// </summary>
public enum class PrsMgr_TypeOfPresentation3d
{
    AllView = 0,
    ProjectorDependent = 1
}; // enum  class PrsMgr_TypeOfPresentation3d

//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjects
//---------------------------------------------------------------------
public ref class PrsMgr_ListOfPresentableObjects sealed
    : public RDC::OCC::NCollection_BaseList
{

#ifdef Include_PrsMgr_ListOfPresentableObjects_h
public:
    Include_PrsMgr_ListOfPresentableObjects_h
#endif

public:
    PrsMgr_ListOfPresentableObjects(::PrsMgr_ListOfPresentableObjects* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    PrsMgr_ListOfPresentableObjects(::PrsMgr_ListOfPresentableObjects& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::PrsMgr_ListOfPresentableObjects* NativeInstance
    {
        ::PrsMgr_ListOfPresentableObjects* get()
        {
            return static_cast<::PrsMgr_ListOfPresentableObjects*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjects::Iterator>
    {

#ifdef Include_PrsMgr_ListOfPresentableObjects_Iterator_h
    public:
        Include_PrsMgr_ListOfPresentableObjects_Iterator_h
#endif

    public:
        Iterator(::PrsMgr_ListOfPresentableObjects::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjects::Iterator>( nativeInstance, true )
        {}

        Iterator(::PrsMgr_ListOfPresentableObjects::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjects::Iterator>( &nativeInstance, false )
        {}

        property ::PrsMgr_ListOfPresentableObjects::Iterator* NativeInstance
        {
            ::PrsMgr_ListOfPresentableObjects::Iterator* get()
            {
                return static_cast<::PrsMgr_ListOfPresentableObjects::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::PrsMgr_PresentableObject^ Value();
        RDC::OCC::PrsMgr_PresentableObject^ ChangeValue();
    }; // class Iterator

    PrsMgr_ListOfPresentableObjects();
    PrsMgr_ListOfPresentableObjects(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::PrsMgr_ListOfPresentableObjects^ Assign(RDC::OCC::PrsMgr_ListOfPresentableObjects^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::PrsMgr_PresentableObject^ First();
    RDC::OCC::PrsMgr_PresentableObject^ Last();
    RDC::OCC::PrsMgr_PresentableObject^ Append(RDC::OCC::PrsMgr_PresentableObject^ theItem);
    RDC::OCC::PrsMgr_PresentableObject^ Prepend(RDC::OCC::PrsMgr_PresentableObject^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator^ theIter);
    RDC::OCC::PrsMgr_PresentableObject^ InsertBefore(RDC::OCC::PrsMgr_PresentableObject^ theItem, RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator^ theIter);
    RDC::OCC::PrsMgr_PresentableObject^ InsertAfter(RDC::OCC::PrsMgr_PresentableObject^ theItem, RDC::OCC::PrsMgr_ListOfPresentableObjects::Iterator^ theIter);
    void Reverse();
}; // class PrsMgr_ListOfPresentableObjects

//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjectsIter
//---------------------------------------------------------------------
public ref class PrsMgr_ListOfPresentableObjectsIter sealed
    : public RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjectsIter>
{

#ifdef Include_PrsMgr_ListOfPresentableObjectsIter_h
public:
    Include_PrsMgr_ListOfPresentableObjectsIter_h
#endif

public:
    PrsMgr_ListOfPresentableObjectsIter(::PrsMgr_ListOfPresentableObjectsIter* nativeInstance)
        : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjectsIter>( nativeInstance, true )
    {}

    PrsMgr_ListOfPresentableObjectsIter(::PrsMgr_ListOfPresentableObjectsIter& nativeInstance)
        : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentableObjectsIter>( &nativeInstance, false )
    {}

    property ::PrsMgr_ListOfPresentableObjectsIter* NativeInstance
    {
        ::PrsMgr_ListOfPresentableObjectsIter* get()
        {
            return static_cast<::PrsMgr_ListOfPresentableObjectsIter*>(_NativeInstance);
        }
    }

public:
    PrsMgr_ListOfPresentableObjectsIter();
    PrsMgr_ListOfPresentableObjectsIter(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::PrsMgr_PresentableObject^ Value();
    RDC::OCC::PrsMgr_PresentableObject^ ChangeValue();
}; // class PrsMgr_ListOfPresentableObjectsIter

//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentations
//---------------------------------------------------------------------
public ref class PrsMgr_ListOfPresentations sealed
    : public RDC::OCC::NCollection_BaseList
{

#ifdef Include_PrsMgr_ListOfPresentations_h
public:
    Include_PrsMgr_ListOfPresentations_h
#endif

public:
    PrsMgr_ListOfPresentations(::PrsMgr_ListOfPresentations* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    PrsMgr_ListOfPresentations(::PrsMgr_ListOfPresentations& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::PrsMgr_ListOfPresentations* NativeInstance
    {
        ::PrsMgr_ListOfPresentations* get()
        {
            return static_cast<::PrsMgr_ListOfPresentations*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::PrsMgr_ListOfPresentations::Iterator>
    {

#ifdef Include_PrsMgr_ListOfPresentations_Iterator_h
    public:
        Include_PrsMgr_ListOfPresentations_Iterator_h
#endif

    public:
        Iterator(::PrsMgr_ListOfPresentations::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentations::Iterator>( nativeInstance, true )
        {}

        Iterator(::PrsMgr_ListOfPresentations::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::PrsMgr_ListOfPresentations::Iterator>( &nativeInstance, false )
        {}

        property ::PrsMgr_ListOfPresentations::Iterator* NativeInstance
        {
            ::PrsMgr_ListOfPresentations::Iterator* get()
            {
                return static_cast<::PrsMgr_ListOfPresentations::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Graphic3d_Structure^ Value();
        RDC::OCC::Graphic3d_Structure^ ChangeValue();
    }; // class Iterator

    PrsMgr_ListOfPresentations();
    PrsMgr_ListOfPresentations(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::PrsMgr_ListOfPresentations^ Assign(RDC::OCC::PrsMgr_ListOfPresentations^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::Graphic3d_Structure^ First();
    RDC::OCC::Graphic3d_Structure^ Last();
    RDC::OCC::Graphic3d_Structure^ Append(RDC::OCC::Graphic3d_Structure^ theItem);
    RDC::OCC::Graphic3d_Structure^ Prepend(RDC::OCC::Graphic3d_Structure^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::PrsMgr_ListOfPresentations::Iterator^ theIter);
    RDC::OCC::Graphic3d_Structure^ InsertBefore(RDC::OCC::Graphic3d_Structure^ theItem, RDC::OCC::PrsMgr_ListOfPresentations::Iterator^ theIter);
    RDC::OCC::Graphic3d_Structure^ InsertAfter(RDC::OCC::Graphic3d_Structure^ theItem, RDC::OCC::PrsMgr_ListOfPresentations::Iterator^ theIter);
    void Reverse();
}; // class PrsMgr_ListOfPresentations

//---------------------------------------------------------------------
//  Class  PrsMgr_Presentations
//---------------------------------------------------------------------
public ref class PrsMgr_Presentations sealed
    : public RDC::OCC::BaseClass<::PrsMgr_Presentations>
    , public IIndexEnumerable<RDC::OCC::PrsMgr_Presentation^>
{

#ifdef Include_PrsMgr_Presentations_h
public:
    Include_PrsMgr_Presentations_h
#endif

public:
    PrsMgr_Presentations(::PrsMgr_Presentations* nativeInstance)
        : RDC::OCC::BaseClass<::PrsMgr_Presentations>( nativeInstance, true )
    {}

    PrsMgr_Presentations(::PrsMgr_Presentations& nativeInstance)
        : RDC::OCC::BaseClass<::PrsMgr_Presentations>( &nativeInstance, false )
    {}

    property ::PrsMgr_Presentations* NativeInstance
    {
        ::PrsMgr_Presentations* get()
        {
            return static_cast<::PrsMgr_Presentations*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::PrsMgr_Presentations::Iterator>
    {

#ifdef Include_PrsMgr_Presentations_Iterator_h
    public:
        Include_PrsMgr_Presentations_Iterator_h
#endif

    public:
        Iterator(::PrsMgr_Presentations::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::PrsMgr_Presentations::Iterator>( nativeInstance, true )
        {}

        Iterator(::PrsMgr_Presentations::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::PrsMgr_Presentations::Iterator>( &nativeInstance, false )
        {}

        property ::PrsMgr_Presentations::Iterator* NativeInstance
        {
            ::PrsMgr_Presentations::Iterator* get()
            {
                return static_cast<::PrsMgr_Presentations::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::PrsMgr_Presentation^ Value();
        RDC::OCC::PrsMgr_Presentation^ ChangeValue();
        bool IsEqual(RDC::OCC::PrsMgr_Presentations::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    PrsMgr_Presentations();
    PrsMgr_Presentations(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::PrsMgr_Presentations^ Assign(RDC::OCC::PrsMgr_Presentations^ theOther);
    void Remove(RDC::OCC::PrsMgr_Presentations::Iterator^ thePosition);
    void Append(RDC::OCC::PrsMgr_Presentation^ theItem);
    void Prepend(RDC::OCC::PrsMgr_Presentation^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::PrsMgr_Presentation^ theItem);
    void InsertAfter(RDC::OCC::PrsMgr_Presentations::Iterator^ thePosition, RDC::OCC::PrsMgr_Presentation^ theItem);
    void Split(int theIndex, RDC::OCC::PrsMgr_Presentations^ theSeq);
    RDC::OCC::PrsMgr_Presentation^ First();
    RDC::OCC::PrsMgr_Presentation^ ChangeFirst();
    RDC::OCC::PrsMgr_Presentation^ Last();
    RDC::OCC::PrsMgr_Presentation^ ChangeLast();
    virtual RDC::OCC::PrsMgr_Presentation^ Value(int theIndex);
    RDC::OCC::PrsMgr_Presentation^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::PrsMgr_Presentation^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::PrsMgr_Presentation^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class PrsMgr_Presentations

//---------------------------------------------------------------------
//  Class  PrsMgr_PresentableObject
//---------------------------------------------------------------------
/// <summary>
/// A framework to supply the Graphic3d structure of the object to be presented.
/// On the first display request, this structure is created by calling the appropriate algorithm and retaining this framework for further display.
/// This abstract framework is inherited in Application Interactive Services (AIS), notably by AIS_InteractiveObject.
/// Consequently, 3D presentation should be handled by the relevant daughter classes and their member functions in AIS.
/// This is particularly true in the creation of new interactive objects.
/// 
/// Key interface methods to be implemented by every Selectable Object:
/// - AcceptDisplayMode() accepting display modes implemented by this object;
/// - Compute() computing presentation for the given display mode index.
/// 
/// Warning! Methods managing standard attributes (SetColor(), SetWidth(), SetMaterial()) have different meaning for objects of different type (or no meaning at all).
/// Sub-classes might override these methods to modify Prs3d_Drawer or class properties providing a convenient short-cut depending on application needs.
/// For more sophisticated configuring, Prs3d_Drawer should be modified directly, while short-cuts might be left unimplemented.
/// </summary>
public ref class PrsMgr_PresentableObject
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_PrsMgr_PresentableObject_h
public:
    Include_PrsMgr_PresentableObject_h
#endif

protected:
    PrsMgr_PresentableObject(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    PrsMgr_PresentableObject(::PrsMgr_PresentableObject* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    PrsMgr_PresentableObject(::PrsMgr_PresentableObject& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::PrsMgr_PresentableObject* NativeInstance
    {
        ::PrsMgr_PresentableObject* get()
        {
            return static_cast<::PrsMgr_PresentableObject*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Return presentations.
    /// </summary>
    RDC::OCC::PrsMgr_Presentations^ Presentations();
    /// <summary>
    /// Get ID of Z layer for main presentation.
    /// </summary>
    int ZLayer();
    /// <summary>
    /// Set Z layer ID and update all presentations of the presentable object.
    /// The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.
    /// </summary>
    void SetZLayer(int theLayerId);
    /// <summary>
    /// Returns true if object has mutable nature (content or location are be changed regularly).
    /// Mutable object will be managed in different way than static onces (another optimizations).
    /// </summary>
    bool IsMutable();
    /// <summary>
    /// Sets if the object has mutable nature (content or location will be changed regularly).
    /// This method should be called before object displaying to take effect.
    /// </summary>
    void SetMutable(bool theIsMutable);
    /// <summary>
    /// Return view affinity mask.
    /// </summary>
    RDC::OCC::Graphic3d_ViewAffinity^ ViewAffinity();
    /// <summary>
    /// Returns true if the Interactive Object has display mode setting overriding global setting (within Interactive Context).
    /// </summary>
    bool HasDisplayMode();
    /// <summary>
    /// Returns the display mode setting of the Interactive Object.
    /// The range of supported display mode indexes should be specified within object definition and filtered by AccepDisplayMode().
    /// </summary>
    /// @sa AcceptDisplayMode()
    int DisplayMode();
    /// <summary>
    /// Sets the display mode for the interactive object.
    /// An object can have its own temporary display mode, which is different from that proposed by the interactive context.
    /// </summary>
    /// @sa AcceptDisplayMode()
    void SetDisplayMode(int theMode);
    /// <summary>
    /// Removes display mode settings from the interactive object.
    /// </summary>
    void UnsetDisplayMode();
    /// <summary>
    /// Returns true if the Interactive Object is in highlight mode.
    /// </summary>
    /// @sa HilightAttributes()
    bool HasHilightMode();
    /// <summary>
    /// Returns highlight display mode.
    /// This is obsolete method for backward compatibility - use ::HilightAttributes() and ::DynamicHilightAttributes() instead.
    /// </summary>
    /// @sa HilightAttributes()
    int HilightMode();
    /// <summary>
    /// Sets highlight display mode.
    /// This is obsolete method for backward compatibility - use ::HilightAttributes() and ::DynamicHilightAttributes() instead.
    /// </summary>
    /// @sa HilightAttributes()
    void SetHilightMode(int theMode);
    /// <summary>
    /// Unsets highlight display mode.
    /// </summary>
    /// @sa HilightAttributes()
    void UnsetHilightMode();
    /// <summary>
    /// Returns true if the class of objects accepts specified display mode index.
    /// The interactive context can have a default mode of representation for the set of Interactive Objects.
    /// This mode may not be accepted by a given class of objects.
    /// Consequently, this virtual method allowing us to get information about the class in question must be implemented.
    /// At least one display mode index should be accepted by this method.
    /// Although subclass can leave default implementation, it is highly desired defining exact list of supported modes instead,
    /// which is usually an enumeration for one object or objects class sharing similar list of display modes.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    /// <summary>
    /// Returns the default display mode.
    /// </summary>
    int DefaultDisplayMode();
    /// <summary>
    /// Returns TRUE if any active presentation has invalidation flag.
    /// </summary>
    /// <param name="theToIncludeHidden">
    /// when TRUE, also checks hidden presentations
    /// </param>
    bool ToBeUpdated(bool theToIncludeHidden);
    /// <summary>
    /// Returns TRUE if any active presentation has invalidation flag.
    /// </summary>
    /// <param name="theToIncludeHidden">
    /// when TRUE, also checks hidden presentations
    /// </param>
    bool ToBeUpdated();
    /// <summary>
    /// Flags presentation to be updated; UpdatePresentations() will recompute these presentations.
    /// </summary>
    /// <param name="theMode">
    /// presentation (display mode) to invalidate, or -1 to invalidate them all
    /// </param>
    void SetToUpdate(int theMode);
    /// <summary>
    /// flags all the Presentations to be Updated.
    /// </summary>
    void SetToUpdate();
    /// <summary>
    /// Returns true if the interactive object is infinite; FALSE by default.
    /// This flag affects various operations operating on bounding box of graphic presentations of this object.
    /// For instance, infinite objects are not taken in account for View FitAll.
    /// This does not necessarily means that object is actually infinite,
    /// auxiliary objects might be also marked with this flag to achieve desired behavior.
    /// </summary>
    bool IsInfinite();
    /// <summary>
    /// Sets if object should be considered as infinite.
    /// </summary>
    void SetInfiniteState(bool theFlag);
    /// <summary>
    /// Sets if object should be considered as infinite.
    /// </summary>
    void SetInfiniteState();
    /// <summary>
    /// Returns information on whether the object accepts display in HLR mode or not.
    /// </summary>
    RDC::OCC::PrsMgr_TypeOfPresentation3d TypeOfPresentation3d();
    /// <summary>
    /// Set type of presentation.
    /// </summary>
    void SetTypeOfPresentation(RDC::OCC::PrsMgr_TypeOfPresentation3d theType);
    /// <summary>
    /// Return presentation display status; PrsMgr_DisplayStatus_None by default.
    /// </summary>
    RDC::OCC::PrsMgr_DisplayStatus DisplayStatus();
    /// <summary>
    /// Returns the attributes settings.
    /// </summary>
    RDC::OCC::Prs3d_Drawer^ Attributes();
    /// <summary>
    /// Initializes the drawing tool theDrawer.
    /// </summary>
    void SetAttributes(RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Returns the hilight attributes settings.
    /// When not NULL, overrides both Prs3d_TypeOfHighlight_LocalSelected and Prs3d_TypeOfHighlight_Selected defined within AIS_InteractiveContext::HighlightStyle().
    /// </summary>
    /// @sa AIS_InteractiveContext::HighlightStyle()
    RDC::OCC::Prs3d_Drawer^ HilightAttributes();
    /// <summary>
    /// Initializes the hilight drawing tool theDrawer.
    /// </summary>
    void SetHilightAttributes(RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Returns the hilight attributes settings.
    /// When not NULL, overrides both Prs3d_TypeOfHighlight_LocalDynamic and Prs3d_TypeOfHighlight_Dynamic defined within AIS_InteractiveContext::HighlightStyle().
    /// </summary>
    /// @sa AIS_InteractiveContext::HighlightStyle()
    RDC::OCC::Prs3d_Drawer^ DynamicHilightAttributes();
    /// <summary>
    /// Initializes the dynamic hilight drawing tool.
    /// </summary>
    void SetDynamicHilightAttributes(RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Clears settings provided by the hilight drawing tool theDrawer.
    /// </summary>
    void UnsetHilightAttributes();
    /// <summary>
    /// Synchronize presentation aspects after their modification.
    /// 
    /// This method should be called after modifying primitive aspect properties (material, texture, shader)
    /// so that modifications will take effect on already computed presentation groups (thus avoiding re-displaying the object).
    /// </summary>
    void SynchronizeAspects();
    /// <summary>
    /// Returns Transformation Persistence defining a special Local Coordinate system where this presentable object is located or NULL handle if not defined.
    /// Position of the object having Transformation Persistence is mutable and depends on camera position.
    /// The same applies to a bounding box of the object.
    /// </summary>
    /// @sa Graphic3d_TransformPers class description
    RDC::OCC::Graphic3d_TransformPers^ TransformPersistence();
    /// <summary>
    /// Sets up Transform Persistence defining a special Local Coordinate system where this object should be located.
    /// Note that management of Transform Persistence object is more expensive than of the normal one,
    /// because it requires its position being recomputed basing on camera position within each draw call / traverse.
    /// </summary>
    /// @sa Graphic3d_TransformPers class description
    void SetTransformPersistence(RDC::OCC::Graphic3d_TransformPers^ theTrsfPers);
    /// <summary>
    /// Return the local transformation.
    /// Note that the local transformation of the object having Transformation Persistence
    /// is applied within Local Coordinate system defined by this Persistence.
    /// </summary>
    RDC::OCC::TopLoc_Datum3D^ LocalTransformationGeom();
    /// <summary>
    /// Sets local transformation to theTransformation.
    /// Note that the local transformation of the object having Transformation Persistence
    /// is applied within Local Coordinate system defined by this Persistence.
    /// </summary>
    void SetLocalTransformation(RDC::OCC::Trsf theTrsf);
    /// <summary>
    /// Sets local transformation to theTransformation.
    /// Note that the local transformation of the object having Transformation Persistence
    /// is applied within Local Coordinate system defined by this Persistence.
    /// </summary>
    void SetLocalTransformation(RDC::OCC::TopLoc_Datum3D^ theTrsf);
    /// <summary>
    /// Returns true if object has a transformation that is different from the identity.
    /// </summary>
    bool HasTransformation();
    /// <summary>
    /// Return the transformation taking into account transformation of parent object(s).
    /// Note that the local transformation of the object having Transformation Persistence
    /// is applied within Local Coordinate system defined by this Persistence.
    /// </summary>
    RDC::OCC::TopLoc_Datum3D^ TransformationGeom();
    /// <summary>
    /// Return the local transformation.
    /// Note that the local transformation of the object having Transformation Persistence
    /// is applied within Local Coordinate system defined by this Persistence.
    /// </summary>
    RDC::OCC::Trsf LocalTransformation();
    /// <summary>
    /// Return the transformation taking into account transformation of parent object(s).
    /// Note that the local transformation of the object having Transformation Persistence
    /// is applied within Local Coordinate system defined by this Persistence.
    /// </summary>
    RDC::OCC::Trsf Transformation();
    /// <summary>
    /// Return inversed transformation.
    /// </summary>
    RDC::OCC::gp_GTrsf^ InversedTransformation();
    /// <summary>
    /// Return combined parent transformation.
    /// </summary>
    RDC::OCC::TopLoc_Datum3D^ CombinedParentTransformation();
    /// <summary>
    /// resets local transformation to identity.
    /// </summary>
    void ResetTransformation();
    /// <summary>
    /// Updates final transformation (parent + local) of presentable object and its presentations.
    /// </summary>
    void UpdateTransformation();
    /// <summary>
    /// Get clip planes.
    /// </summary>
    /// <returns>
    /// set of previously added clip planes for all display mode presentations.
    /// </returns>
    RDC::OCC::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
    /// <summary>
    /// Set clip planes for graphical clipping for all display mode presentations.
    /// The composition of clip planes truncates the rendering space to convex volume.
    /// Please be aware that number of supported clip plane is limited.
    /// The planes which exceed the limit are ignored.
    /// Besides of this, some planes can be already set in view where the object is shown:
    /// the number of these planes should be subtracted from limit to predict the maximum
    /// possible number of object clipping planes.
    /// </summary>
    void SetClipPlanes(RDC::OCC::Graphic3d_SequenceOfHClipPlane^ thePlanes);
    /// <summary>
    /// Adds clip plane for graphical clipping for all display mode
    /// presentations. The composition of clip planes truncates the rendering
    /// space to convex volume. Please be aware that number of supported
    /// clip plane is limited. The planes which exceed the limit are ignored.
    /// Besides of this, some planes can be already set in view where the object
    /// is shown: the number of these planes should be subtracted from limit
    /// to predict the maximum possible number of object clipping planes.
    /// </summary>
    /// <param name="thePlane">
    /// [in] the clip plane to be appended to map of clip planes.
    /// </param>
    void AddClipPlane(RDC::OCC::Graphic3d_ClipPlane^ thePlane);
    /// <summary>
    /// Removes previously added clip plane.
    /// </summary>
    /// <param name="thePlane">
    /// [in] the clip plane to be removed from map of clip planes.
    /// </param>
    void RemoveClipPlane(RDC::OCC::Graphic3d_ClipPlane^ thePlane);
    /// <summary>
    /// Returns parent of current object in scene hierarchy.
    /// </summary>
    RDC::OCC::PrsMgr_PresentableObject^ Parent();
    /// <summary>
    /// Returns children of the current object.
    /// </summary>
    RDC::OCC::PrsMgr_ListOfPresentableObjects^ Children();
    /// <summary>
    /// Makes theObject child of current object in scene hierarchy.
    /// </summary>
    void AddChild(RDC::OCC::PrsMgr_PresentableObject^ theObject);
    /// <summary>
    /// Makes theObject child of current object in scene hierarchy with keeping the current global transformation
    /// So the object keeps the same position/orientation in the global CS.
    /// </summary>
    void AddChildWithCurrentTransformation(RDC::OCC::PrsMgr_PresentableObject^ theObject);
    /// <summary>
    /// Removes theObject from children of current object in scene hierarchy.
    /// </summary>
    void RemoveChild(RDC::OCC::PrsMgr_PresentableObject^ theObject);
    /// <summary>
    /// Removes theObject from children of current object in scene hierarchy with keeping the current global transformation.
    /// So the object keeps the same position/orientation in the global CS.
    /// </summary>
    void RemoveChildWithRestoreTransformation(RDC::OCC::PrsMgr_PresentableObject^ theObject);
    /// <summary>
    /// Returns true if object should have own presentations.
    /// </summary>
    bool HasOwnPresentations();
    /// <summary>
    /// Returns bounding box of object correspondingly to its current display mode.
    /// This method requires presentation to be already computed, since it relies on bounding box of presentation structures,
    /// which are supposed to be same/close amongst different display modes of this object.
    /// </summary>
    void BoundingBox(RDC::OCC::Bnd_Box^ theBndBox);
    /// <summary>
    /// Enables or disables on-triangulation build of isolines according to the flag given.
    /// </summary>
    void SetIsoOnTriangulation(bool theIsEnabled);
    /// <summary>
    /// Returns the current facing model which is in effect.
    /// </summary>
    RDC::OCC::Aspect_TypeOfFacingModel CurrentFacingModel();
    /// <summary>
    /// change the current facing model apply on polygons for SetColor(), SetTransparency(), SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE.
    /// This mean that attributes is applying both on the front and back face.
    /// </summary>
    void SetCurrentFacingModel(RDC::OCC::Aspect_TypeOfFacingModel theModel);
    /// <summary>
    /// change the current facing model apply on polygons for SetColor(), SetTransparency(), SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE.
    /// This mean that attributes is applying both on the front and back face.
    /// </summary>
    void SetCurrentFacingModel();
    /// <summary>
    /// Returns true if the Interactive Object has color.
    /// </summary>
    bool HasColor();
    /// <summary>
    /// Returns the color setting of the Interactive Object.
    /// </summary>
    void Color(RDC::OCC::Quantity_Color^ theColor);
    /// <summary>
    /// Only the interactive object knowns which Drawer attribute is affected by the color, if any
    /// (ex: for a wire,it's the wireaspect field of the drawer, but for a vertex, only the point aspect field is affected by the color).
    /// WARNING : Do not forget to set the corresponding fields here (hasOwnColor and myDrawer->SetColor())
    /// </summary>
    void SetColor(RDC::OCC::Quantity_Color^ theColor);
    /// <summary>
    /// Removes color settings. Only the Interactive Object
    /// knows which Drawer attribute is   affected by the color
    /// setting. For a wire, for example, wire aspect is the
    /// attribute affected. For a vertex, however, only point
    /// aspect is affected by the color setting.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Returns true if the Interactive Object has width.
    /// </summary>
    bool HasWidth();
    /// <summary>
    /// Returns the width setting of the Interactive Object.
    /// </summary>
    double Width();
    /// <summary>
    /// Allows you to provide the setting aValue for width.
    /// Only the Interactive Object knows which Drawer attribute is affected by the width setting.
    /// </summary>
    void SetWidth(double theWidth);
    /// <summary>
    /// Reset width to default value.
    /// </summary>
    void UnsetWidth();
    /// <summary>
    /// Returns true if the Interactive Object has a setting for material.
    /// </summary>
    bool HasMaterial();
    /// <summary>
    /// Returns the current material setting as enumeration value.
    /// </summary>
    RDC::OCC::Graphic3d_NameOfMaterial Material();
    /// <summary>
    /// Sets the material aMat defining this display attribute
    /// for the interactive object.
    /// Material aspect determines shading aspect, color and
    /// transparency of visible entities.
    /// </summary>
    void SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ aName);
    /// <summary>
    /// Removes the setting for material.
    /// </summary>
    void UnsetMaterial();
    /// <summary>
    /// Returns true if there is a transparency setting.
    /// </summary>
    bool IsTransparent();
    /// <summary>
    /// Returns the transparency setting.
    /// This will be between 0.0 and 1.0.
    /// At 0.0 an object will be totally opaque, and at 1.0, fully transparent.
    /// </summary>
    double Transparency();
    /// <summary>
    /// Attributes a setting aValue for transparency.
    /// The transparency value should be between 0.0 and 1.0.
    /// At 0.0 an object will be totally opaque, and at 1.0, fully transparent.
    /// Warning At a value of 1.0, there may be nothing visible.
    /// </summary>
    void SetTransparency(double aValue);
    /// <summary>
    /// Attributes a setting aValue for transparency.
    /// The transparency value should be between 0.0 and 1.0.
    /// At 0.0 an object will be totally opaque, and at 1.0, fully transparent.
    /// Warning At a value of 1.0, there may be nothing visible.
    /// </summary>
    void SetTransparency();
    /// <summary>
    /// Removes the transparency setting. The object is opaque by default.
    /// </summary>
    void UnsetTransparency();
    /// <summary>
    /// Returns Standard_True if <myDrawer> has non-null shading aspect
    /// </summary>
    bool HasPolygonOffsets();
    /// <summary>
    /// Retrieves current polygon offsets settings from <myDrawer>.
    /// </summary>
    void PolygonOffsets(int% aMode, float% aFactor, float% aUnits);
    /// <summary>
    /// Sets up polygon offsets for this object.
    /// </summary>
    /// @sa Graphic3d_Aspects::SetPolygonOffsets()
    void SetPolygonOffsets(int aMode, float aFactor, float aUnits);
    /// <summary>
    /// Sets up polygon offsets for this object.
    /// </summary>
    /// @sa Graphic3d_Aspects::SetPolygonOffsets()
    void SetPolygonOffsets(int aMode, float aFactor);
    /// <summary>
    /// Sets up polygon offsets for this object.
    /// </summary>
    /// @sa Graphic3d_Aspects::SetPolygonOffsets()
    void SetPolygonOffsets(int aMode);
    /// <summary>
    /// Clears settings provided by the drawing tool aDrawer.
    /// </summary>
    void UnsetAttributes();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// gives the list of modes which are flagged "to be updated".
    /// </summary>
    void ToBeUpdated(RDC::OCC::TColStd_ListOfInteger^ ListOfMode);
    /// <summary>
    /// Get value of the flag "propagate visual state"
    /// It means that the display/erase/color visual state is propagated automatically to all children;
    /// by default, the flag is true
    /// </summary>
    bool ToPropagateVisualState();
    /// <summary>
    /// Change the value of the flag "propagate visual state"
    /// </summary>
    void SetPropagateVisualState(bool theFlag);
    static RDC::OCC::PrsMgr_PresentableObject^ CreateDowncasted(::PrsMgr_PresentableObject* instance);
}; // class PrsMgr_PresentableObject

//---------------------------------------------------------------------
//  Class  PrsMgr_PresentationManager
//---------------------------------------------------------------------
/// <summary>
/// A framework to manage 3D displays, graphic entities and their updates.
/// Used in the AIS package (Application Interactive Services), to enable the advanced user to define the
/// default display mode of a new interactive object which extends the list of signatures and types.
/// Definition of new display types is handled by calling the presentation algorithms provided by the StdPrs package.
/// </summary>
public ref class PrsMgr_PresentationManager sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_PrsMgr_PresentationManager_h
public:
    Include_PrsMgr_PresentationManager_h
#endif

public:
    PrsMgr_PresentationManager(::PrsMgr_PresentationManager* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    PrsMgr_PresentationManager(::PrsMgr_PresentationManager& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::PrsMgr_PresentationManager* NativeInstance
    {
        ::PrsMgr_PresentationManager* get()
        {
            return static_cast<::PrsMgr_PresentationManager*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a framework to manage displays and graphic entities with the 3D view theStructureManager.
    /// </summary>
    PrsMgr_PresentationManager(RDC::OCC::Graphic3d_StructureManager^ theStructureManager);
    /// <summary>
    /// Displays the presentation of the object in the given Presentation manager with the given mode.
    /// The mode should be enumerated by the object which inherits PresentableObject.
    /// </summary>
    void Display(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Displays the presentation of the object in the given Presentation manager with the given mode.
    /// The mode should be enumerated by the object which inherits PresentableObject.
    /// </summary>
    void Display(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// erases the presentation of the object in the given
    /// Presentation manager with the given mode.
    /// If @theMode is -1, then erases all presentations of the object.
    /// </summary>
    void Erase(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// erases the presentation of the object in the given
    /// Presentation manager with the given mode.
    /// If @theMode is -1, then erases all presentations of the object.
    /// </summary>
    void Erase(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Clears the presentation of the presentable object thePrsObject in this framework with the display mode theMode.
    /// </summary>
    void Clear(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Clears the presentation of the presentable object thePrsObject in this framework with the display mode theMode.
    /// </summary>
    void Clear(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Sets the visibility of presentable object.
    /// </summary>
    void SetVisibility(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theValue);
    /// <summary>
    /// Removes highlighting from the presentation of the presentable object.
    /// </summary>
    void Unhighlight(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Sets the display priority theNewPrior of the
    /// presentable object thePrsObject in this framework with the display mode theMode.
    /// </summary>
    void SetDisplayPriority(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, RDC::OCC::Graphic3d_DisplayPriority theNewPrior);
    /// <summary>
    /// Returns the display priority of the presentable object
    /// thePrsObject in this framework with the display mode theMode.
    /// </summary>
    RDC::OCC::Graphic3d_DisplayPriority DisplayPriority(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Set Z layer ID for all presentations of the object.
    /// </summary>
    void SetZLayer(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theLayerId);
    /// <summary>
    /// Get Z layer ID assigned to all presentations of the object.
    /// Method returns -1 value if object has no presentations and is
    /// impossible to get layer index.
    /// </summary>
    int GetZLayer(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    bool IsDisplayed(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    bool IsDisplayed(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Returns true if the presentation of the presentable
    /// object thePrsObject in this framework with the display mode theMode is highlighted.
    /// </summary>
    bool IsHighlighted(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Returns true if the presentation of the presentable
    /// object thePrsObject in this framework with the display mode theMode is highlighted.
    /// </summary>
    bool IsHighlighted(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Updates the presentation of the presentable object
    /// thePrsObject in this framework with the display mode theMode.
    /// </summary>
    void Update(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Updates the presentation of the presentable object
    /// thePrsObject in this framework with the display mode theMode.
    /// </summary>
    void Update(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Resets the transient list of presentations previously displayed in immediate mode
    /// and begins accumulation of new list by following AddToImmediateList()/Color()/Highlight() calls.
    /// </summary>
    void BeginImmediateDraw();
    /// <summary>
    /// Resets the transient list of presentations previously displayed in immediate mode.
    /// </summary>
    void ClearImmediateDraw();
    /// <summary>
    /// Stores thePrs in the transient list of presentations to be displayed in immediate mode.
    /// Will be taken in account in EndImmediateDraw method.
    /// </summary>
    void AddToImmediateList(RDC::OCC::Graphic3d_Structure^ thePrs);
    /// <summary>
    /// Allows rapid drawing of the each view in theViewer by avoiding an update of the whole background.
    /// </summary>
    void EndImmediateDraw(RDC::OCC::V3d_Viewer^ theViewer);
    /// <summary>
    /// Clears and redisplays immediate structures of the viewer taking into account its affinity.
    /// </summary>
    void RedrawImmediate(RDC::OCC::V3d_Viewer^ theViewer);
    /// <summary>
    /// Returns true if Presentation Manager is accumulating transient list of presentations to be displayed in immediate mode.
    /// </summary>
    bool IsImmediateModeOn();
    /// <summary>
    /// Highlights the graphic object thePrsObject in the color theColor.
    /// thePrsObject has the display mode theMode;
    /// this has the default value of 0, that is, the wireframe display mode.
    /// </summary>
    void Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode, RDC::OCC::PrsMgr_PresentableObject^ theSelObj, int theImmediateStructLayerId);
    /// <summary>
    /// Highlights the graphic object thePrsObject in the color theColor.
    /// thePrsObject has the display mode theMode;
    /// this has the default value of 0, that is, the wireframe display mode.
    /// </summary>
    void Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode, RDC::OCC::PrsMgr_PresentableObject^ theSelObj);
    /// <summary>
    /// Highlights the graphic object thePrsObject in the color theColor.
    /// thePrsObject has the display mode theMode;
    /// this has the default value of 0, that is, the wireframe display mode.
    /// </summary>
    void Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode);
    /// <summary>
    /// Highlights the graphic object thePrsObject in the color theColor.
    /// thePrsObject has the display mode theMode;
    /// this has the default value of 0, that is, the wireframe display mode.
    /// </summary>
    void Color(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::Prs3d_Drawer^ theStyle);
    void Connect(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::PrsMgr_PresentableObject^ theOtherObject, int theMode, int theOtherMode);
    void Connect(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::PrsMgr_PresentableObject^ theOtherObject, int theMode);
    void Connect(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::PrsMgr_PresentableObject^ theOtherObject);
    /// <summary>
    /// Sets the transformation theTransformation for the presentable object thePrsObject.
    /// thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.
    /// </summary>
    void Transform(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::TopLoc_Datum3D^ theTransformation, int theMode);
    /// <summary>
    /// Sets the transformation theTransformation for the presentable object thePrsObject.
    /// thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.
    /// </summary>
    void Transform(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, RDC::OCC::TopLoc_Datum3D^ theTransformation);
    /// <summary>
    /// Returns the structure manager.
    /// </summary>
    RDC::OCC::Graphic3d_StructureManager^ StructureManager();
    /// <summary>
    /// Returns true if there is a presentation of the
    /// presentable object thePrsObject in this framework, thePrsObject having the display mode theMode.
    /// </summary>
    bool HasPresentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Returns true if there is a presentation of the
    /// presentable object thePrsObject in this framework, thePrsObject having the display mode theMode.
    /// </summary>
    bool HasPresentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Returns the presentation Presentation of the presentable object thePrsObject in this framework.
    /// When theToCreate is true - automatically creates presentation for specified mode when not exist.
    /// Optional argument theSelObj specifies parent decomposed object to inherit its view affinity.
    /// </summary>
    RDC::OCC::PrsMgr_Presentation^ Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theToCreate, RDC::OCC::PrsMgr_PresentableObject^ theSelObj);
    /// <summary>
    /// Returns the presentation Presentation of the presentable object thePrsObject in this framework.
    /// When theToCreate is true - automatically creates presentation for specified mode when not exist.
    /// Optional argument theSelObj specifies parent decomposed object to inherit its view affinity.
    /// </summary>
    RDC::OCC::PrsMgr_Presentation^ Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theToCreate);
    /// <summary>
    /// Returns the presentation Presentation of the presentable object thePrsObject in this framework.
    /// When theToCreate is true - automatically creates presentation for specified mode when not exist.
    /// Optional argument theSelObj specifies parent decomposed object to inherit its view affinity.
    /// </summary>
    RDC::OCC::PrsMgr_Presentation^ Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject, int theMode);
    /// <summary>
    /// Returns the presentation Presentation of the presentable object thePrsObject in this framework.
    /// When theToCreate is true - automatically creates presentation for specified mode when not exist.
    /// Optional argument theSelObj specifies parent decomposed object to inherit its view affinity.
    /// </summary>
    RDC::OCC::PrsMgr_Presentation^ Presentation(RDC::OCC::PrsMgr_PresentableObject^ thePrsObject);
    /// <summary>
    /// Allows to apply location transformation to shadow highlight presentation immediately.
    /// </summary>
    /// <param name="theObj">
    /// defines the base object, it local transformation will be applied to corresponding highlight structure
    /// </param>
    /// <param name="theMode">
    /// defines display mode of the base object
    /// </param>
    /// <param name="theSelObj">
    /// defines the object produced after decomposition of the base object for local selection
    /// </param>
    void UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentableObject^ theObj, int theMode, RDC::OCC::PrsMgr_PresentableObject^ theSelObj);
    /// <summary>
    /// Allows to apply location transformation to shadow highlight presentation immediately.
    /// </summary>
    /// <param name="theObj">
    /// defines the base object, it local transformation will be applied to corresponding highlight structure
    /// </param>
    /// <param name="theMode">
    /// defines display mode of the base object
    /// </param>
    /// <param name="theSelObj">
    /// defines the object produced after decomposition of the base object for local selection
    /// </param>
    void UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentableObject^ theObj, int theMode);
    /// <summary>
    /// Allows to apply location transformation to shadow highlight presentation immediately.
    /// </summary>
    /// <param name="theObj">
    /// defines the base object, it local transformation will be applied to corresponding highlight structure
    /// </param>
    /// <param name="theMode">
    /// defines display mode of the base object
    /// </param>
    /// <param name="theSelObj">
    /// defines the object produced after decomposition of the base object for local selection
    /// </param>
    void UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentableObject^ theObj);
    static RDC::OCC::PrsMgr_PresentationManager^ CreateDowncasted(::PrsMgr_PresentationManager* instance);
}; // class PrsMgr_PresentationManager

//---------------------------------------------------------------------
//  Class  PrsMgr_Presentation
//---------------------------------------------------------------------
public ref class PrsMgr_Presentation sealed
    : public RDC::OCC::Graphic3d_Structure
{

#ifdef Include_PrsMgr_Presentation_h
public:
    Include_PrsMgr_Presentation_h
#endif

public:
    PrsMgr_Presentation(::PrsMgr_Presentation* nativeInstance)
        : RDC::OCC::Graphic3d_Structure( nativeInstance )
    {}

    PrsMgr_Presentation(::PrsMgr_Presentation& nativeInstance)
        : RDC::OCC::Graphic3d_Structure( nativeInstance )
    {}

    property ::PrsMgr_Presentation* NativeInstance
    {
        ::PrsMgr_Presentation* get()
        {
            return static_cast<::PrsMgr_Presentation*>(_NativeInstance);
        }
    }

public:
    RDC::OCC::Graphic3d_Structure^ Presentation();
    /// <summary>
    /// returns the PresentationManager in which the presentation has been created.
    /// </summary>
    RDC::OCC::PrsMgr_PresentationManager^ PresentationManager();
    void SetUpdateStatus(bool theUpdateStatus);
    bool MustBeUpdated();
    /// <summary>
    /// Return display mode index.
    /// </summary>
    int Mode();
    /// <summary>
    /// Display structure.
    /// </summary>
    void Display();
    /// <summary>
    /// Remove structure.
    /// </summary>
    void Erase();
    /// <summary>
    /// Highlight structure.
    /// </summary>
    void Highlight(RDC::OCC::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Unhighlight structure.
    /// </summary>
    void Unhighlight();
    /// <summary>
    /// Return TRUE if structure has been displayed and in no hidden state.
    /// </summary>
    bool IsDisplayed();
    /// <summary>
    /// removes the whole content of the presentation.
    /// Does not remove the other connected presentations.
    /// </summary>
    void Clear(bool theWithDestruction);
    /// <summary>
    /// removes the whole content of the presentation.
    /// Does not remove the other connected presentations.
    /// </summary>
    void Clear();
    /// <summary>
    /// Compute structure using presentation manager.
    /// </summary>
    void Compute();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::PrsMgr_Presentation^ CreateDowncasted(::PrsMgr_Presentation* instance);
}; // class PrsMgr_Presentation

}; // namespace OCC
}; // namespace RDC
