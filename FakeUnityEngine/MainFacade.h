#ifndef MAINFACDE_H
#include "MenuBar.h"
#include "TransformUI.h"


class MenuBar;
class TransformUI;

class MainFacade {
private:
	MenuBar _menuBar;
	TransformUI _transformUI;
	void  addInspectorWindow();
	

public:
	void  runUI();
	
};


#endif //  MAINFACDE_H



