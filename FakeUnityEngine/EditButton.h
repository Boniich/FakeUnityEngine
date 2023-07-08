#pragma once

namespace MenuBarSpace {
	class EditButton {

	private:
		void addUndoRedoMenuItem();
		void addDuplicateMenuitem();
		void addFrameSelectMenuItem();
		void addFindSearchMenuItem();
		void addPlayPauseMenuItem();
		void addSignInOutMenuItem();
		void addCopyPasteMenuItem();
		void addSelectMenuItem();
		void addSelectionMenuItem();
		void addGraphicsTierMenuItem();
		void addPreferencesMenuItem();

	public:
		void addEditButton();
	};
}