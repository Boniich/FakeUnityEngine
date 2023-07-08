
#ifndef MENUBAR_H

#include "FileButton.h"

class FileBUtton;

using namespace MenuBarSpace;

class MenuBar {
	
	FileButton* _fileButton = nullptr;

private:
	void addFileButton();
	void addEditButton();
	void addAssetsButton();
	void addCreateList();
	void add2DMenu();
	void addGameObjectButton();
	void addComponentButton();
	void addJobsButton();
	void addWindowButton();
	void addHelpButton();

public:
	MenuBar();
	~MenuBar();
	void addMainMenuBar();
};


#endif // !MENUBAR_H
