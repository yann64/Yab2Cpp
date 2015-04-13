#ifndef YABINTERFACE_H
#define YABINTERFACE_H

#ifdef __cplusplus
	#include <Application.h>
	#include <FilePanel.h>
	#include <GraphicsDefs.h>
	#include <ListItem.h>
	#include <Menu.h>
	#include <PropertyInfo.h>
	#include <String.h>
	#include <TranslatorRoster.h>
	#include "YabList.h"
	#include "global.h"
	#include "config.h"

	class YabInterface : public BApplication
	{
	public:
		YabInterface(int argc, char** argv, const char* signature);
		~YabInterface();
		
		status_t GetSupportedSuites(BMessage *msg);
		BHandler *ResolveSpecifier(BMessage *msg, int32 index, BMessage *spec, int32 form, const char *prop);
		const char* GetApplicationDirectory();
		void OpenWindow(const BRect frame, const char* id, const char* title);
		int CloseWindow(const char* view);
		void MessageReceived(BMessage *message);
		bool QuitRequested();
		bool ExitRequested();
		void CreateButton(BRect frame, const char* id, const char* title, const char* window);
		int CreateImage(BPoint coordinates, const char* imagefile, const char* window);
		int CreateImage(BRect frame, const char* imagefile, const char* window);
		int CreateSVG(BRect frame, const char* imagefile, const char* window);
		void DrawText(BPoint coordinates, const char* text, const char* window);
		void DrawRect(BRect frame, const char* window);  
		void DrawClear(const char* window, bool isExit);  
		void CreateAlert(const char* text, const char* button1, const char* option);
		void CreateMenu(const char* menuhead, const char* menuitem, const char *shortcut, const char* window); 
		void CreateTextControl(BRect frame, const char *id, const char* label, const char* text, const char* window); 
		void CreateCheckBox(double x, double y, const char *id, const char* label, int isActivated, const char* window); 
		void CreateRadioButton(double x, double y, const char* groupID, const char* label, int isActivated, const char* window); 
		void CreateListBox(BRect frame, const char* title, int scrollbar, const char* window);
		void CreateDropBox(BRect frame, const char* title, const char* label, const char* window);
		void CreateItem(const char* id, const char* item);
		void RemoveItem(const char* title, const char* item);
		void ClearItems(const char* title);
		void CreateText(double x, double y, const char *id, const char* text, const char* window);
		void Text2(BRect frame, const char *id, const char* text, const char* window);
		void TextAlign(const char* txt, const char *option);
		const char* LoadFilePanel(const char* mode, const char* title, const char* directory);
		const char* SaveFilePanel(const char* mode, const char* title, const char* directory, const char*filename);
		void SetLayout(const char* layout, const char* window);
		void WindowSet(const char* option, const char* value, const char* window);
		void WindowSet(const char* option, int r, int g, int b, const char* window);
		void WindowSet(const char* option, double x, double y, const char* window);
		void WindowSet(const char* option, const char* window);
		void WindowClear(const char* window);
		void TextEdit(BRect frame, const char* title, int scrollbar, const char* window);
		void TextAdd(const char* title, const char* text);
		void TextSet(const char* title, const char* option);
		void TextSet(const char* title, const char* option, int value);
		void TextSet(const char* title, const char* option, const char* value);
		void TextColor(const char* title, const char* option, const char* command);
		void TextColor(const char* title, const char* option, int r, int g, int b);
		void TextClear(const char* title);
		const char* TextGet(const char* title);   
		const char* TextGet(const char* title, int linenum);
		const char* TextGet6(const char* title, const char* option);   
		int TextGet(const char* title, const char* option);   
		double TextGet(const char* title, const char* option, int line);   
		int TextGet(const char* title, const char* option, const char* option2);   
		void DrawSet1(const char* option, const char* window);
		void DrawSet2(int fillorstroke, const char* mypattern);
		void View(BRect frame, const char* id, const char* view);
		void BoxView(BRect frame, const char* id, const char* text, int lineType, const char* view);
		void BoxViewSet(const char* id, const char* option, const char* value);
		void Tab(BRect frame, const char* id, const char* names, const char* view);
		void TabSet(const char* id, int num);
		void TabAdd(const char* id, const char* name);
		void TabDel(const char* id, int num);
		int TabViewGet(const char* id);
		void DrawDot(double x, double y, const char* window);  
		void DrawLine(double x1, double y1, double x2, double y2, const char* window);  
		void DrawCircle(double x, double y, double r, const char* window);  
		void DrawEllipse(double x, double y, double r1, double r2, const char* window);  
		void DrawCurve(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, const char* window);  
		void Slider(BRect frame, const char* id, const char* title, int min, int max, const char* view);
		void Slider(BRect frame, const char* id, const char* title, int min, int max, const char* option, const char* view);
		void SetSlider(const char* id, const char* label1, const char* label2);
		void SetSlider(const char* id, const char* bottomtop, int count);
		void SetSlider(const char* id, const char* part, int r, int g, int b);
		void SetSlider(const char* id, int value);
		void SetOption(const char* id, const char* option, const char* value);
		void SetOption(const char* id, const char* option, int r, int g, int b);
		void SetOption(const char* id, const char* option, double x, double y);
		void SetOption(const char* id, const char* option);
		void SetOption(const char* id, const char* option, int value);
		void DropZone(const char* view);
		void ColorControl(double x, double y, const char* id, const char* view);
		void ColorControl(const char* id, int r, int g, int b);
		void TextControl(const char* id, const char* text);
		void TextControl(const char* id, int mode);
		void TextControl(const char* id, const char* option, const char* value);
		void TextControl(const char* id);
		void TreeBox1(BRect frame, const char* id, int scrollbarType, const char* view);
		void TreeBox2(const char* id, const char* item);
		void TreeBox3(const char* id, const char* head, const char* item, int isExpanded);
		void TreeBox4(const char* id);
		void TreeBox5(const char* id, const char* item);
		void TreeBox7(const char* id, int pos);
		void TreeBox8(const char* id, int pos);
		void TreeBox9(const char* id, const char* head, const char* item);
		void TreeBox10(const char* id, const char* head);
		void TreeBox11(const char* id, const char* head);
		void TreeBox12(const char* id, const char* item, int pos);
		void Launch(const char* strg);
		const char* TreeboxGet(const char* treebox, int pos);
		int TreeboxCount(const char* treebox);
		void ButtonImage(double x, double y,const char* id,const char* enabledon, const char* enabledoff, const char* disabled, const char* view);
		void CheckboxImage(double x, double y,const char* id,const char* enabledon, const char* enabledoff, const char *disabledon, const char *disabledoff, int isActivated, const char* view);
		void CheckboxSet(const char* id, int isActivated);
		void RadioSet(const char* id, int isActivated);
		void ToolTips(const char* view, const char* text);
		void ToolTipsColor(const char* color, int r, int g, int b);
		void TreeSort(const char* view);
		void ListSort(const char* view);
		void FileBox(BRect frame, const char* id, bool scrollbartype, const char* option, const char* view);
		void FileBoxAdd(const char* id, const char* name, int32 pos, double maxWidth, double minWidth, double width, const char* option);
		void FileBoxClear(const char* view);
		void ColumnBoxAdd(const char* id, int column, int position, int height, const char* item);
		void ColumnBoxSelect(const char *columnbox, int position);
		void ColumnBoxRemove(const char *columnbox, int position);
		void ColumnBoxColor(const char *columnbox, const char* option, int r, int g, int b);
		int Printer(const char* docname, const char *view, const char* config);
		void PrinterConfig(const char* config);
		void Calendar(double x, double y, const char* id, const char* format, const char* date, const char* view);
		const char* Calendar(const char* id);
		void Calendar(const char* id, const char* date);
		void MouseSet(const char* opt);
		void Scrollbar(const char* id, int format, const char* view);
		void ScrollbarSet(const char* scrollview, const char* option, double position);
		void ScrollbarSet(const char* scrollview, const char* option, double opt1, double opt2);
		void ScrollbarSet(const char* scrollview, const char* option);
		double ScrollbarGet(const char* scrollview, const char* option);
		const char* ListboxGet(const char* listbox, int pos);
		int ListboxCount(const char* listbox);
		void ListboxAdd(const char* listbox, const char* item);
		void ListboxAdd(const char* listbox, int pos,  const char* item);
		void ListboxSelect(const char* listbox, int pos);
		void ListboxRemove(const char* listbox, int pos);
		void SplitView(BRect frame, const char* id, int isVertical, int style, const char* view);
		void SplitView(const char* splitView, const char* option, double position);
		void SplitView(const char* splitView, const char* option, double left, double right);
		double SplitViewGet(const char* splitView, const char* option);
		void StackViews(BRect frame, const char* id, int number, const char* view);
		void StackViews(const char* stackView, int num);
		int StackViewGet(const char* stackView);
		void DrawSet3(const char* option, int transparency);
		void TextURL(double x, double y, const char* id, const char* text, const char* url, const char* view);
		void TextURL(const char* id, const char* option, int r, int g, int b);
		void Menu(const char* menuHead, int isRadio, const char* view);
		void SubMenu(const char* menuHead, const char* menuItem, const char* subMenuItem, const char* modifiers, const char* view);
		void SubMenu(const char* menuHead, const char* menuItem, int isRadio, const char* view);
		void SpinControl(double x, double y, const char* id, const char* label, int min, int max, int step, const char* view);
		void SpinControl(const char* spinControl, int value);
		int SpinControlGet(const char *spinControl);
		const char* PopUpMenu(double x, double y, const char* menuItems, const char* view);
		void DropBoxSelect(const char* dropbox, int position);
		void DropBoxClear(const char* dropbox);
		void DropBoxRemove(const char* dropbox, int position);
		int DropBoxCount(const char* dropbox);
		const char* DropBoxGet(const char* dropbox, int position);
		int ColorControlGet(const char* colorcontrol, const char* option);
		int SliderGet(const char* slider);
		void SubMenu3(const char* menuHead, const char* menuItem, const char* subMenuItem, const char* option, const char* view);
		void Menu3(const char* menuHead, const char* menuItem, const char* option,const char* view);
		double ScrollbarWidth();
		double MenuHeight();
		double TabHeight();
		const char* ColumnBoxGet(const char *columnbox, int column, int position);
		int ColumnBoxCount(const char *columnbox);
		const char* TextControlGet(const char* id); 
		int WindowGet(const char* view, const char* option);
		int ViewGet(const char* view, const char* option); //vasper
		double DrawGet(const char* option, const char* txt, const char* view);
		int DrawGet(BPoint coord, const char* option, const char* view);
		const char* DrawGet(const char* option);
		void ClipboardCopy(const char* text);
		const char* ClipboardPaste();
		int DeskbarParam(const char* option);
		int DesktopParam(bool isWidth);
		int NewAlert(const char* text, const char* button1, const char* button2, const char* button3, const char* option); 
		int ThreadKill(const char* option, int id);
		int ThreadGet(const char* option, const char* appname);
		const int IsMouseIn(const char* view);
		const char* GetMouseIn();
		const char* GetMouseMessages(const char* view);
		const char* KeyboardMessages(const char* view);
		const char* GetMessageString();
		int MessageSend(const char* app, const char* msg);
		void SetLocalize(const char* path);
		void Bitmap(double w, double h, const char* id);
		int BitmapColor(double x, double y, const char* id, const char* option);
		void BitmapDraw(double x, double y, const char* bitmap, const char* mode, const char* view);
		void BitmapDraw(BRect frame, const char* bitmap, const char* mode, const char* view);
		void BitmapGet(BRect frame, const char* id, const char* bitmap);
		void BitmapGet(double w, const char* id, const char* path);
		int BitmapGet(const char* id, const char* option);
		int BitmapLoad(const char* id, const char* option);
		void BitmapGetIcon(const char* id, const char* option, const char* path);
		void BitmapDrag(const char* bitmap);
		void BitmapRemove(const char* bitmap);
		void Screenshot(BRect frame, const char* bitmap);
		int BitmapSave(const char* id, const char* filename, const char* type);
		void Canvas(BRect frame, const char* id, const char* view);
		int Sound(const char* filename);
		void SoundStop(int32 id);
		void SoundWait(int32 id);
		int IsComputerOn();
		void ShortCut(const char* view, const char* key, const char* msg);
		void DrawSet(const char* option, const char* color,const char* view);
		void Treebox13(const char* id,const char* option, int pos);
		int TreeboxGetOpt(const char* id, const char* option, int pos);
		int ListboxGetNum(const char* id);
		int DropboxGetNum(const char* id);
		int TreeboxGetNum(const char* id);
		int ColumnboxGetNum(const char* id);
		void Attribute1(const char* type, const char* name, const char* value, const char* filename);
		void AttributeClear(const char* name, const char* filename);
		const char* AttributeGet1(const char* name, const char* filename);
		double AttributeGet2(const char* name, const char* filename);

		const int GetErrorCode();
		void Error(const char* id, const char* type);
		void ErrorGen(const char* msg);
		void SetCurrentLineNumber(int line, const char* libname);
		void SetMainFileName(const char* name);
		void KillThread(int code);
		void StatusBar(BRect frame, const char* id, const char* label1, const char* label2, const char* view);
		void StatusBarSet(const char* id, const char* label1, const char* label2, double state);
		void StatusBarSet(BRect frame, const char* id, const char* view);
		void StatusBarSet(const char* id, int r, int g, int b);
		void RefsReceived(BMessage *message);

	private:
		void RemoveView(BView* myView);
		void GetMMsgInfo(BString &t, int mouseStateInfo, int mouseLButton, int mouseMButton, int mouseRButton, int x, int y, const char* name);
		BBitmap* loadImage(const char* name);
		static int compare(BListItem **firstArg, BListItem **secondArg);

		BTranslatorRoster *Roster;
		char ApplicationDirectory[1024];
		char loadPanel[1280];
		char columntext[4096];
		char mousemessagebuffer[64];
		char keyboardbuffer[27];
		char messagebuffer[32567];
		char attrbuffer[32567];
		char mouseoverbuffer[256];
		BFilePanel *fopen, *fsave;
		thread_id myThread;
		int errorCode;
		bool drawStroking;
		int yabAlpha;
		pattern yabPattern;
		YabList *viewList;
		int currentLineNumber;
		const char* mainFileName;
		bool exiting;
		BPropertyInfo *myProps;
		BString localMessage;
		BString currentLib;
		BList *yabbitmaps;
		BList *yabcanvas;
		BString lastMouseMsg;
	};
#else
	typedef
		struct YabInterface
			YabInterface;
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int mmain(int argc, char** argv, YabInterface* yab); /* ANSI C prototypes */
extern const char* yi_GetApplicationDirectory(YabInterface *yab);
extern void yi_OpenWindow(double x1,double y1,double x2,double y2, const char* id, const char* title, YabInterface* yab);
extern int yi_CloseWindow(const char* view, YabInterface* yab);
extern void yi_CreateButton(double x1,double y1,double x2,double y2, const char* id, const char* title, const char* window, YabInterface* yab);
extern int yi_CreateImage(double x,double y,const char* imagefile, const char* window, YabInterface* yab);
extern int yi_CreateImage2(double x1,double y1,double x2, double y2,const char* imagefile, const char* window, YabInterface* yab);
extern int yi_CreateSVG(double x1,double y1,double x2, double y2,const char* imagefile, const char* window, YabInterface* yab);
extern void yi_CreateMenu(const char* menuhead, const char* menuitem, const char *shortcut, const char* window, YabInterface* yab); 
extern void yi_CreateTextControl(double x1, double y1, double x2, double y2, const char *id, const char* label, const char* text, const char* window, YabInterface *yab);
extern void yi_CreateCheckBox(double x, double y, const char *id, const char* label, int isActivated, const char* window, YabInterface *yab); 
extern void yi_CreateRadioButton(double x, double y, const char* groupID, const char* label, int isActivated, const char* window, YabInterface *yab); 
extern void yi_CreateListBox(double x1,double y1,double x2,double y2, const char* title, int scrollbar, const char* window, YabInterface *yab);
extern void yi_CreateDropBox(double x1, double y1,double x2,double y2, const char* title,const char* label, const char* window, YabInterface *yab);
extern void yi_CreateItem(const char* id,const char* item, YabInterface *yab);
extern void yi_RemoveItem(const char* title,const char* item, YabInterface *yab);
extern void yi_ClearItems(const char* title, YabInterface *yab);
extern void yi_DrawText(double x, double y, const char* text, const char* window, YabInterface* yab);
extern void yi_DrawRect(double x1, double y1, double x2, double y2, const char* window, YabInterface* yab);
extern void yi_DrawClear(const char* window, YabInterface* yab);
extern void yi_CreateAlert(const char* text, const char* button1, const char* type, YabInterface* yab);
extern void yi_CreateText(double x, double y, const char *id, const char* text, const char* window, YabInterface *yab);
extern void yi_Text2(double x1, double y1, double x2, double y2, const char *id, const char* text, const char* window, YabInterface *yab);
extern void yi_TextAlign(const char* txt, const char *option, YabInterface *yab);
extern void yi_Translate(char* text, char result[]);
extern void yi_MenuTranslate(char* text, char result[]);
extern void yi_SetLocalize();
extern void yi_StopLocalize();
extern const char* yi_LoadFilePanel(const char* mode, const char* title, const char* directory, YabInterface* yab);
extern const char* yi_SaveFilePanel(const char* mode, const char* title, const char* directory, const char*filename, YabInterface* yab);
extern void yi_SetLayout(const char* layout, const char* window, YabInterface *yab);
extern void yi_WindowSet1(const char* option, const char* value, const char* window, YabInterface *yab);
extern void yi_WindowSet2(const char* option, int r, int g, int b, const char* window, YabInterface *yab);
extern void yi_WindowSet3(const char* option, double x, double y, const char* window, YabInterface *yab);
extern void yi_WindowSet4(const char* option, const char* window, YabInterface *yab);
extern void yi_WindowClear(const char* window, YabInterface *yab);
extern void yi_TextEdit(double x1, double y1, double x2, double y2, const char* title,  int scrollbar, const char* window, YabInterface *yab);
extern void yi_TextAdd(const char* title, const char* text, YabInterface *yab);
extern void yi_TextSet(const char* title, const char* option, YabInterface *yab);
extern void yi_TextClear(const char* title, YabInterface *yab);
extern const char* yi_TextGet(const char* title, YabInterface *yab);
extern const char* yi_TextGet3(const char* title, int linenum, YabInterface *yab);
extern const char* yi_TextGet6(const char* title, const char* option, YabInterface *yab);
extern double yi_TextGet4(const char* title, const char* option, int line, YabInterface *yab);   
extern int yi_TextGet5(const char* title, const char* option, const char* option2, YabInterface *yab);   
extern void yi_TextSet2(const char* title, const char* option, int value, YabInterface *yab);
extern void yi_TextSet3(const char* title, const char* option, const char* value, YabInterface *yab);
extern void yi_TextColor1(const char* title, const char* option, const char* command, YabInterface *yab);
extern void yi_TextColor2(const char* title, const char* option, int r, int g, int b, YabInterface *yab);
extern int yi_TextGet2(const char* title, const char* option, YabInterface *yab);
extern void yi_DrawSet1(const char* option, const char* window, YabInterface *yab);
extern void yi_DrawSet2(int fillorstroke, const char* mypattern, YabInterface *yab);
extern void yi_View(double x1, double y1, double x2, double y2, const char* id, const char* view, YabInterface *yab);
extern void yi_BoxView(double x1, double y1, double x2, double y2, const char* id, const char* text, int lineType, const char* view, YabInterface *yab);
extern void yi_BoxViewSet(const char* id, const char* option, const char* value, YabInterface *yab);
extern void yi_Tab(double x1, double y1, double x2, double y2, const char* id, const char* names, const char* view, YabInterface *yab);
extern void yi_TabSet(const char* id, int num, YabInterface *yab);
extern void yi_TabAdd(const char* id, const char* name, YabInterface *yab);
extern void yi_TabDel(const char* id, int num, YabInterface *yab);
extern int yi_TabViewGet(const char* id, YabInterface *yab);
extern void yi_DrawDot(double x, double y, const char* window, YabInterface *yab);
extern void yi_DrawLine(double x1, double y1, double x2, double y2, const char* window, YabInterface *yab);
extern void yi_DrawCircle(double x, double y, double r, const char* window, YabInterface *yab);
extern void yi_DrawEllipse(double x, double y, double r1, double r2, const char* window, YabInterface *yab);
extern void yi_DrawCurve(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, const char* window, YabInterface *yab);
extern void yi_Slider1(double x1, double y1, double x2, double y2, const char* id, const char* title, int min, int max, const char* view, YabInterface *yab);
extern void yi_Slider2(double x1, double y1, double x2, double y2, const char* id, const char* title, int min, int max, const char* option, const char* view, YabInterface *yab);
extern void yi_SetSlider1(const char* id, const char* label1, const char* label2, YabInterface *yab);
extern void yi_SetSlider2(const char* id, const char* bottomtop, int count, YabInterface *yab);
extern void yi_SetSlider3(const char* id, const char* part, int r, int g, int b, YabInterface *yab);
extern void yi_SetSlider4(const char* id, int value, YabInterface *yab);
extern void yi_SetOption1(const char* id, const char* option, const char* value, YabInterface *yab);
extern void yi_SetOption2(const char* id, const char* option, int r, int g, int b, YabInterface *yab);
extern void yi_SetOption3(const char* id, const char* option, double x, double y, YabInterface *yab);
extern void yi_SetOption4(const char* id, const char* option, YabInterface *yab);
extern void yi_SetOption5(const char* id, const char* option, int value, YabInterface *yab);
extern void yi_DropZone(const char* view, YabInterface *yab);
extern void yi_ColorControl1(double x, double y, const char* id, const char* view, YabInterface* yab);
extern void yi_ColorControl2(const char* id, int r, int g, int b, YabInterface* yab);
extern void yi_TextControl2(const char* id, const char* text, YabInterface* yab);
extern void yi_TextControl3(const char* id, int mode, YabInterface* yab);
extern void yi_TextControl5(const char* id, YabInterface* yab);
extern void yi_TextControl4(const char* id, const char* option, const char* value, YabInterface* yab);
extern void yi_TreeBox1(double x1, double y1, double x2, double y2, const char* id, int scrollbarType, const char* view, YabInterface* yab);
extern void yi_TreeBox2(const char* id, const char* item, YabInterface* yab);
extern void yi_TreeBox3(const char* id, const char* head, const char* item, int isExpanded, YabInterface* yab);
extern void yi_TreeBox4(const char* id, YabInterface* yab);
extern void yi_TreeBox5(const char* id, const char* item, YabInterface* yab);
extern void yi_TreeBox7(const char* id, int pos, YabInterface* yab);
extern void yi_TreeBox8(const char* id, int pos, YabInterface* yab);
extern void yi_TreeBox9(const char* id, const char* head, const char* item, YabInterface* yab);
extern void yi_TreeBox10(const char* id, const char* head, YabInterface* yab);
extern void yi_TreeBox11(const char* id, const char* head, YabInterface* yab);
extern void yi_TreeBox12(const char* id, const char* item, int pos, YabInterface* yab);
extern const char* yi_TreeboxGet(const char* treebox, int pos, YabInterface* yab);
extern int yi_TreeboxCount(const char* treebox, YabInterface* yab);
extern void yi_ButtonImage(double x,double y,const char* id,const char* enabledon, const char* enabledoff, const char* disabled, const char* view, YabInterface *yab);
extern void yi_CheckboxImage(double x,double y,const char* id,const char* enabledon, const char* enabledoff, const char *disabledon, const char *disabledoff, int isActivated, const char* view, YabInterface *yab);
extern void yi_CheckboxSet(const char* id, int isActivated, YabInterface* yab);
extern void yi_RadioSet(const char* id, int isActivated, YabInterface* yab);
extern const char* yi_TextControlGet(const char* id, YabInterface* yab);
extern void yi_ToolTip(const char* view, const char* text, YabInterface *yab);
extern void yi_ToolTipColor(const char* color, int r, int g, int b, YabInterface *yab);
extern void yi_TreeSort(const char* view, YabInterface *yab);
extern void yi_ListSort(const char* view, YabInterface *yab);
extern void yi_FileBox(double x1, double y1, double x2, double y2, const char* id, int scrollbartype, const char* option, const char* view, YabInterface *yab);
extern void yi_FileBoxAdd2(const char* id, const char* name, int pos, double maxWidth, double minWidth, double width, const char* option, YabInterface *yab);
extern void yi_FileBoxClear(const char* view, YabInterface *yab);  
extern void yi_ColumnBoxAdd(const char* id, int column, int position, int height, const char* item, YabInterface *yab);
extern void yi_ColumnBoxSelect(const char *columnbox, int position, YabInterface *yab);
extern void yi_ColumnBoxRemove(const char *columnbox, int position, YabInterface *yab);
extern void yi_ColumnBoxColor(const char *columnbox, const char* option, int r, int g, int b, YabInterface *yab);
extern int yi_Printer(const char* docname, const char *view, const char* config, YabInterface *yab);
extern void yi_PrinterConfig(const char* config, YabInterface *yab);
extern const char* yi_ColumnBoxGet(const char *columnbox, int column, int position, YabInterface *yab);
extern int yi_ColumnBoxCount(const char *columnbox, YabInterface *yab);
extern int yi_DeskbarPosition(YabInterface *yab);
extern int yi_DeskbarExpanded(YabInterface *yab);
extern int yi_DeskbarWidth(YabInterface *yab);
extern int yi_DeskbarHeight(YabInterface *yab);
extern int yi_DeskbarX(YabInterface *yab);
extern int yi_DeskbarY(YabInterface *yab);
extern int yi_DesktopWidth(YabInterface *yab);
extern int yi_DesktopHeight(YabInterface *yab);
extern int yi_WindowGet(const char* view, const char* option, YabInterface *yab);
extern int yi_ViewGet(const char* view, const char* option, YabInterface *yab); //vasper
extern void yi_ClipboardCopy(const char* text, YabInterface *yab);
extern const char* yi_ClipboardPaste(YabInterface *yab);
extern int yi_NewAlert(const char* text, const char* button1, const char* button2, const char* button3, const char* option, YabInterface *yab);
extern void yi_Calendar1(double x, double y, const char* id, const char* format, const char* date, const char* view, YabInterface *yab);
extern const char* yi_Calendar2(const char* id, YabInterface *yab);
extern void yi_Calendar3(const char* id, const char* date, YabInterface *yab);
extern void yi_MouseSet(const char* opt, YabInterface *yab);
extern void yi_Scrollbar(const char* id, int format, const char* view, YabInterface *yab);
extern void yi_ScrollbarSet1(const char* scrollview, const char* option, double position, YabInterface *yab);
extern void yi_ScrollbarSet2(const char* scrollview, const char* option, double opt1, double opt2, YabInterface *yab);
extern void yi_ScrollbarSet3(const char* scrollview, const char* option, YabInterface *yab);
extern double yi_ScrollbarGet(const char* scrollview, const char* option, YabInterface *yab);
extern const char* yi_ListboxGet(const char* listbox, int pos, YabInterface *yab);
extern int yi_ListboxCount(const char* listbox, YabInterface *yab);
extern void yi_ListboxAdd1(const char* listbox, const char* item, YabInterface *yab);
extern void yi_ListboxAdd2(const char* listbox, int pos,  const char* item, YabInterface *yab);
extern void yi_ListboxSelect(const char* listbox, int pos, YabInterface *yab);
extern void yi_ListboxRemove(const char* listbox, int pos, YabInterface *yab);
extern void yi_SplitView1(double x1,double y1,double x2,double y2, const char* id, int isVertical, int style, const char* view, YabInterface *yab);
extern void yi_SplitView2(const char* splitView, const char* option, double position, YabInterface *yab);
extern void yi_SplitView3(const char* splitView, const char* option, double left, double right, YabInterface *yab);
extern double yi_SplitViewGet(const char* splitView, const char* option, YabInterface *yab);
extern void yi_StackView1(double x1,double y1,double x2,double y2, const char* id, int number, const char* view, YabInterface *yab);
extern void yi_StackView2(const char* stackView, int num, YabInterface *yab);
extern int yi_StackViewGet(const char* stackView, YabInterface *yab);
extern void yi_DrawSet3(const char* option, int transparency, YabInterface *yab);
extern void yi_TextURL1(double x, double y, const char* id, const char* text, const char* url, const char* view, YabInterface *yab);
extern void yi_TextURL2(const char* id, const char* option, int r, int g, int b, YabInterface *yab);
extern void yi_Menu2(const char* menuHead, int isRadio, const char* view, YabInterface *yab);
extern void yi_SubMenu1(const char* menuHead, const char* menuItem, const char* subMenuItem, const char* modifiers, const char* view, YabInterface *yab);
extern void yi_SubMenu2(const char* menuHead, const char* menuItem, int isRadio, const char* view, YabInterface *yab);
extern void yi_SpinControl1(double x, double y, const char* id, const char* label, int min, int max, int step, const char* view, YabInterface *yab);
extern void yi_SpinControl2(const char* spinControl, int value, YabInterface *yab);
extern int yi_SpinControlGet(const char *spinControl, YabInterface *yab);
extern const char* yi_PopUpMenu(double x, double y, const char* menuItems, const char* view, YabInterface *yab);
extern void yi_DropBoxSelect(const char* dropbox, int position, YabInterface *yab);
extern void yi_DropBoxClear(const char* dropbox, YabInterface *yab);
extern void yi_DropBoxRemove(const char* dropbox, int position, YabInterface *yab);
extern int yi_DropBoxCount(const char* dropbox, YabInterface *yab);
extern const char* yi_DropBoxGet(const char* dropbox, int position, YabInterface *yab);
extern int yi_ColorControlGet(const char* colorcontrol, const char* option, YabInterface *yab);
extern int yi_SliderGet(const char* slider, YabInterface *yab);
extern void yi_SubMenu3(const char* menuHead, const char* menuItem, const char* subMenuItem, const char* option, const char* view, YabInterface *yab);
extern void yi_Menu3(const char* menuHead, const char* menuItem, const char* option,const char* view, YabInterface *yab);
extern double yi_MenuHeight(YabInterface *yab);
extern double yi_TabHeight(YabInterface *yab);
extern double yi_ScrollbarWidth(YabInterface *yab); 
extern double yi_DrawGet1(const char* option, const char* txt, const char* view, YabInterface* yab);
extern double yi_DrawGet2(const char* option, const char* view, YabInterface* yab);
extern const char* yi_DrawGet3(const char* option, YabInterface* yab);
extern int yi_DrawGet4(double x, double y, const char* option, const char* view, YabInterface* yab);
extern void yi_exit(int code, YabInterface *yab);
extern void yi_Launch(const char* strg, YabInterface *yab);
extern const int yi_IsMouseIn(const char* view, YabInterface* yab);
extern const char* yi_GetMouseIn(YabInterface* yab);
extern const char* yi_GetMouseMessages(const char* view, YabInterface* yab);
extern const char* yi_KeyboardMessages(const char* view, YabInterface* yab);
extern const char* yi_CheckMessages(YabInterface* yab);
extern int yi_MessageSend(const char* app, const char* msg,YabInterface* yab);
extern int yi_ThreadKill(const char* option, int id,YabInterface* yab);
extern int yi_ThreadGet(const char* option, const char* appname,YabInterface* yab);
extern void yi_Bitmap(double w, double h, const char* id,YabInterface* yab);
extern int yi_BitmapColor(double x, double y, const char* id, const char* option, YabInterface *yab);
extern void yi_BitmapDraw(double x, double y, const char* bitmap, const char* mode, const char* view,YabInterface* yab);
extern void yi_BitmapDraw2(double x1, double y1, double x2, double y2, const char* bitmap, const char* mode, const char* view,YabInterface* yab);
extern void yi_BitmapGet(double x1, double y1, double x2, double y2, const char* id, const char* bitmap,YabInterface* yab);
extern void yi_BitmapGet2(double w, const char* id, const char* path, YabInterface* yab);
extern void yi_BitmapGetIcon(const char* id, const char* option, const char* path, YabInterface* yab);
extern int yi_BitmapGetNum(const char* id, const char* option, YabInterface* yab);
extern int yi_BitmapLoad(const char* filename, const char* bitmap, YabInterface* yab);
extern void yi_BitmapDrag(const char* bitmap,YabInterface* yab);
extern void yi_BitmapRemove(const char* bitmap,YabInterface* yab);
extern void yi_Screenshot(double x1, double y1, double x2, double y2, const char* bitmap, YabInterface* yab);
extern int yi_BitmapSave(const char* id, const char* filename, const char* type, YabInterface* yab);
extern void yi_Canvas(double x1, double y1, double x2, double y2, const char* id, const char* view, YabInterface *yab);
extern int yi_Sound(const char* filename, YabInterface* yab);
extern void yi_SoundStop(int id, YabInterface* yab);
extern void yi_SoundWait(int id, YabInterface* yab);
extern int yi_IsComputerOn(YabInterface* yab);
extern void yi_ShortCut(const char* view, const char* key, const char* msg, YabInterface* yab);
extern void yi_DrawSet4(const char* option, const char* color,const char* view, YabInterface* yab);
extern void yi_Treebox13(const char* id,const char* option, int pos, YabInterface* yab);
extern int yi_TreeboxGetOpt(const char* id, const char* option, int pos, YabInterface* yab);
extern int yi_ListboxGetNum(const char* id, YabInterface* yab);
extern int yi_DropboxGetNum(const char* id, YabInterface* yab);
extern int yi_TreeboxGetNum(const char* id, YabInterface* yab);
extern int yi_ColumnboxGetNum(const char* id, YabInterface* yab);
extern void yi_SetLocalize2(const char* path, YabInterface* yab);
extern void yi_SetCurrentLineNumber(int line, const char* libname, YabInterface* yab);
extern void yi_SetMainFileName(const char* name, YabInterface* yab);
extern void yi_beep();
extern void yi_StatusBar(double x1, double y1, double x2, double y2, const char* id, const char* label1, const char* label2, const char* view, YabInterface* yab);
extern void yi_StatusBarSet(const char* id, const char* label1, const char* label2, double state, YabInterface* yab);
extern void yi_StatusBarSet2(double x1, double y1, double x2, double y2, const char* id, const char* view, YabInterface* yab);
extern void yi_StatusBarSet3(const char* id, int r, int g, int b, YabInterface* yab);
extern void yi_Attribute1(const char* type, const char* name, const char* value, const char* filename, YabInterface* yab);
extern void yi_AttributeClear(const char* name, const char* filename, YabInterface* yab);
extern const char* yi_AttributeGet1(const char* name, const char* filename, YabInterface* yab);
extern double yi_AttributeGet2(const char* name, const char* filename, YabInterface* yab);
extern char* refsRec;	//refs received

#ifdef LOCALIZE
const char* _L(const char* text);
#endif

#ifdef __cplusplus
}
#endif

#endif /*YABINTERFACE_H*/  
