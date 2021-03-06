
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Image_Create(AOwner: TComponent): TImage; stdcall;
begin
  Result :=  TImage.Create(AOwner);
end;

procedure Image_Free(AObj: TImage); stdcall;
begin
  AObj.Free;
end;

procedure Image_BringToFront(AObj: TImage); stdcall;
begin
  AObj.BringToFront;
end;

procedure Image_ClientToScreen(AObj: TImage; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Image_ClientToParent(AObj: TImage; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Image_Dragging(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function Image_HasParent(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure Image_Hide(AObj: TImage); stdcall;
begin
  AObj.Hide;
end;

procedure Image_Invalidate(AObj: TImage); stdcall;
begin
  AObj.Invalidate;
end;

function Image_Perform(AObj: TImage; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Image_Refresh(AObj: TImage); stdcall;
begin
  AObj.Refresh;
end;

procedure Image_Repaint(AObj: TImage); stdcall;
begin
  AObj.Repaint;
end;

procedure Image_ScreenToClient(AObj: TImage; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Image_ParentToClient(AObj: TImage; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Image_SendToBack(AObj: TImage); stdcall;
begin
  AObj.SendToBack;
end;

procedure Image_SetBounds(AObj: TImage; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Image_Show(AObj: TImage); stdcall;
begin
  AObj.Show;
end;

procedure Image_Update(AObj: TImage); stdcall;
begin
  AObj.Update;
end;

function Image_GetTextBuf(AObj: TImage; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Image_GetTextLen(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure Image_SetTextBuf(AObj: TImage; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function Image_FindComponent(AObj: TImage; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Image_GetNamePath(AObj: TImage): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Image_Assign(AObj: TImage; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure Image_DisposeOf(AObj: TImage); stdcall;
begin
  AObj.DisposeOf;
end;

function Image_ClassType(AObj: TImage): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function Image_ClassName(AObj: TImage): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function Image_InstanceSize(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function Image_InheritsFrom(AObj: TImage; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Image_Equals(AObj: TImage; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function Image_GetHashCode(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function Image_ToString(AObj: TImage): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function Image_GetCanvas(AObj: TImage): TCanvas; stdcall;
begin
  Result :=  AObj.Canvas;
end;

function Image_GetAlign(AObj: TImage): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure Image_SetAlign(AObj: TImage; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function Image_GetAnchors(AObj: TImage): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure Image_SetAnchors(AObj: TImage; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function Image_GetAutoSize(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.AutoSize;
end;

procedure Image_SetAutoSize(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.AutoSize := AValue;
end;

function Image_GetCenter(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Center;
end;

procedure Image_SetCenter(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.Center := AValue;
end;

function Image_GetDragCursor(AObj: TImage): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure Image_SetDragCursor(AObj: TImage; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function Image_GetDragKind(AObj: TImage): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure Image_SetDragKind(AObj: TImage; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function Image_GetDragMode(AObj: TImage): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure Image_SetDragMode(AObj: TImage; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function Image_GetEnabled(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure Image_SetEnabled(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function Image_GetIncrementalDisplay(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.IncrementalDisplay;
end;

procedure Image_SetIncrementalDisplay(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.IncrementalDisplay := AValue;
end;

function Image_GetParentShowHint(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Image_SetParentShowHint(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function Image_GetPicture(AObj: TImage): TPicture; stdcall;
begin
  Result :=  AObj.Picture;
end;

procedure Image_SetPicture(AObj: TImage; AValue: TPicture); stdcall;
begin
  AObj.Picture := AValue;
end;

function Image_GetPopupMenu(AObj: TImage): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Image_SetPopupMenu(AObj: TImage; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function Image_GetProportional(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Proportional;
end;

procedure Image_SetProportional(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.Proportional := AValue;
end;

function Image_GetShowHint(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure Image_SetShowHint(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function Image_GetStretch(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Stretch;
end;

procedure Image_SetStretch(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.Stretch := AValue;
end;

function Image_GetTransparent(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Transparent;
end;

procedure Image_SetTransparent(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.Transparent := AValue;
end;

function Image_GetVisible(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure Image_SetVisible(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

procedure Image_SetOnClick(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnClick);
    Exit;
  end;
  AObj.OnClick := TEventClass.OnClick;
  TEventClass.Add(AObj, @TEventClass.OnClick, AEventId);
end;

procedure Image_SetOnContextPopup(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    TEventClass.Remove(AObj, @TEventClass.OnContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := TEventClass.OnContextPopup;
  TEventClass.Add(AObj, @TEventClass.OnContextPopup, AEventId);
end;

procedure Image_SetOnDblClick(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDblClick);
    Exit;
  end;
  AObj.OnDblClick := TEventClass.OnDblClick;
  TEventClass.Add(AObj, @TEventClass.OnDblClick, AEventId);
end;

procedure Image_SetOnDragDrop(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := TEventClass.OnDragDrop;
  TEventClass.Add(AObj, @TEventClass.OnDragDrop, AEventId);
end;

procedure Image_SetOnDragOver(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragOver);
    Exit;
  end;
  AObj.OnDragOver := TEventClass.OnDragOver;
  TEventClass.Add(AObj, @TEventClass.OnDragOver, AEventId);
end;

procedure Image_SetOnEndDock(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDock);
    Exit;
  end;
  AObj.OnEndDock := TEventClass.OnEndDock;
  TEventClass.Add(AObj, @TEventClass.OnEndDock, AEventId);
end;

procedure Image_SetOnEndDrag(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := TEventClass.OnEndDrag;
  TEventClass.Add(AObj, @TEventClass.OnEndDrag, AEventId);
end;

procedure Image_SetOnGesture(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

procedure Image_SetOnMouseActivate(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseActivate := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseActivate);
    Exit;
  end;
  AObj.OnMouseActivate := TEventClass.OnMouseActivate;
  TEventClass.Add(AObj, @TEventClass.OnMouseActivate, AEventId);
end;

procedure Image_SetOnMouseDown(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := TEventClass.OnMouseDown;
  TEventClass.Add(AObj, @TEventClass.OnMouseDown, AEventId);
end;

procedure Image_SetOnMouseEnter(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := TEventClass.OnMouseEnter;
  TEventClass.Add(AObj, @TEventClass.OnMouseEnter, AEventId);
end;

procedure Image_SetOnMouseLeave(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := TEventClass.OnMouseLeave;
  TEventClass.Add(AObj, @TEventClass.OnMouseLeave, AEventId);
end;

procedure Image_SetOnMouseMove(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := TEventClass.OnMouseMove;
  TEventClass.Add(AObj, @TEventClass.OnMouseMove, AEventId);
end;

procedure Image_SetOnMouseUp(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := TEventClass.OnMouseUp;
  TEventClass.Add(AObj, @TEventClass.OnMouseUp, AEventId);
end;

procedure Image_SetOnStartDock(AObj: TImage; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnStartDock);
    Exit;
  end;
  AObj.OnStartDock := TEventClass.OnStartDock;
  TEventClass.Add(AObj, @TEventClass.OnStartDock, AEventId);
end;

function Image_GetAction(AObj: TImage): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure Image_SetAction(AObj: TImage; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function Image_GetBiDiMode(AObj: TImage): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Image_SetBiDiMode(AObj: TImage; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

procedure Image_GetBoundsRect(AObj: TImage; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Image_SetBoundsRect(AObj: TImage; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function Image_GetClientHeight(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Image_SetClientHeight(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure Image_GetClientOrigin(AObj: TImage; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure Image_GetClientRect(AObj: TImage; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function Image_GetClientWidth(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Image_SetClientWidth(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function Image_GetControlState(AObj: TImage): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure Image_SetControlState(AObj: TImage; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function Image_GetControlStyle(AObj: TImage): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure Image_SetControlStyle(AObj: TImage; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function Image_GetExplicitLeft(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function Image_GetExplicitTop(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function Image_GetExplicitWidth(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function Image_GetExplicitHeight(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function Image_GetFloating(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function Image_GetParent(AObj: TImage): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure Image_SetParent(AObj: TImage; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

function Image_GetStyleElements(AObj: TImage): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure Image_SetStyleElements(AObj: TImage; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

function Image_GetAlignWithMargins(AObj: TImage): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure Image_SetAlignWithMargins(AObj: TImage; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function Image_GetLeft(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure Image_SetLeft(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function Image_GetTop(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure Image_SetTop(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function Image_GetWidth(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure Image_SetWidth(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function Image_GetHeight(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure Image_SetHeight(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function Image_GetCursor(AObj: TImage): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure Image_SetCursor(AObj: TImage; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function Image_GetHint(AObj: TImage): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Image_SetHint(AObj: TImage; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function Image_GetMargins(AObj: TImage): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure Image_SetMargins(AObj: TImage; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function Image_GetCustomHint(AObj: TImage): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure Image_SetCustomHint(AObj: TImage; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function Image_GetComponentCount(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function Image_GetComponentIndex(AObj: TImage): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Image_SetComponentIndex(AObj: TImage; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function Image_GetOwner(AObj: TImage): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function Image_GetName(AObj: TImage): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Image_SetName(AObj: TImage; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function Image_GetTag(AObj: TImage): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure Image_SetTag(AObj: TImage; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function Image_GetComponents(AObj: TImage; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function Image_StaticClassType: TClass; stdcall;
begin
  Result := TImage;
end;

exports
  Image_Create,
  Image_Free,
  Image_BringToFront,
  Image_ClientToScreen,
  Image_ClientToParent,
  Image_Dragging,
  Image_HasParent,
  Image_Hide,
  Image_Invalidate,
  Image_Perform,
  Image_Refresh,
  Image_Repaint,
  Image_ScreenToClient,
  Image_ParentToClient,
  Image_SendToBack,
  Image_SetBounds,
  Image_Show,
  Image_Update,
  Image_GetTextBuf,
  Image_GetTextLen,
  Image_SetTextBuf,
  Image_FindComponent,
  Image_GetNamePath,
  Image_Assign,
  Image_DisposeOf,
  Image_ClassType,
  Image_ClassName,
  Image_InstanceSize,
  Image_InheritsFrom,
  Image_Equals,
  Image_GetHashCode,
  Image_ToString,
  Image_GetCanvas,
  Image_GetAlign,
  Image_SetAlign,
  Image_GetAnchors,
  Image_SetAnchors,
  Image_GetAutoSize,
  Image_SetAutoSize,
  Image_GetCenter,
  Image_SetCenter,
  Image_GetDragCursor,
  Image_SetDragCursor,
  Image_GetDragKind,
  Image_SetDragKind,
  Image_GetDragMode,
  Image_SetDragMode,
  Image_GetEnabled,
  Image_SetEnabled,
  Image_GetIncrementalDisplay,
  Image_SetIncrementalDisplay,
  Image_GetParentShowHint,
  Image_SetParentShowHint,
  Image_GetPicture,
  Image_SetPicture,
  Image_GetPopupMenu,
  Image_SetPopupMenu,
  Image_GetProportional,
  Image_SetProportional,
  Image_GetShowHint,
  Image_SetShowHint,
  Image_GetStretch,
  Image_SetStretch,
  Image_GetTransparent,
  Image_SetTransparent,
  Image_GetVisible,
  Image_SetVisible,
  Image_SetOnClick,
  Image_SetOnContextPopup,
  Image_SetOnDblClick,
  Image_SetOnDragDrop,
  Image_SetOnDragOver,
  Image_SetOnEndDock,
  Image_SetOnEndDrag,
  Image_SetOnGesture,
  Image_SetOnMouseActivate,
  Image_SetOnMouseDown,
  Image_SetOnMouseEnter,
  Image_SetOnMouseLeave,
  Image_SetOnMouseMove,
  Image_SetOnMouseUp,
  Image_SetOnStartDock,
  Image_GetAction,
  Image_SetAction,
  Image_GetBiDiMode,
  Image_SetBiDiMode,
  Image_GetBoundsRect,
  Image_SetBoundsRect,
  Image_GetClientHeight,
  Image_SetClientHeight,
  Image_GetClientOrigin,
  Image_GetClientRect,
  Image_GetClientWidth,
  Image_SetClientWidth,
  Image_GetControlState,
  Image_SetControlState,
  Image_GetControlStyle,
  Image_SetControlStyle,
  Image_GetExplicitLeft,
  Image_GetExplicitTop,
  Image_GetExplicitWidth,
  Image_GetExplicitHeight,
  Image_GetFloating,
  Image_GetParent,
  Image_SetParent,
  Image_GetStyleElements,
  Image_SetStyleElements,
  Image_GetAlignWithMargins,
  Image_SetAlignWithMargins,
  Image_GetLeft,
  Image_SetLeft,
  Image_GetTop,
  Image_SetTop,
  Image_GetWidth,
  Image_SetWidth,
  Image_GetHeight,
  Image_SetHeight,
  Image_GetCursor,
  Image_SetCursor,
  Image_GetHint,
  Image_SetHint,
  Image_GetMargins,
  Image_SetMargins,
  Image_GetCustomHint,
  Image_SetCustomHint,
  Image_GetComponentCount,
  Image_GetComponentIndex,
  Image_SetComponentIndex,
  Image_GetOwner,
  Image_GetName,
  Image_SetName,
  Image_GetTag,
  Image_SetTag,
  Image_GetComponents,
  Image_StaticClassType;

