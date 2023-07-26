#pragma once

class TransformUI {
private:

	float XTranslation = 1.0f;
	float YTranslation = 0.0f;
	float ZTranslation = 0.0f;

	float XRotation = 0.0f;
	float YRotation = 0.0f;
	float ZRotation = 0.0f;

	float XScale = 0.0f;
	float YScale = 0.0f;
	float ZScale = 0.0f;

	float inputWidth = 50;

	void addTranslationProperty();
	void addRotationProperty();
	void addScaleProperty();

public:

	TransformUI();
	~TransformUI();
	void addTransformMenu();
};