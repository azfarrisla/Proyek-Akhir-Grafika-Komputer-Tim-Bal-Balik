#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VAO3, VBO3, EBO3, texture3, VAO4, VBO4, EBO4, texture4, VAO5, VBO5, EBO5, texture5, texture6, texture7, texture8, texture9;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	float t = 0;
	float x = 0;
	float y = 0;
	float z = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildPersegipjg();
	void BuildColoredCube2();
	void BuildColoredPlane();
	void BuildColoredPlane2();
	void BuildColoredPlane3();

	void BuildColoredSkin();
	void BuildColoredCloth();
	void Buildyello();
	void Buildwood();
	void Buildwall();
	void DrawTrotoar();
	void DrawKakiKursiKecil2();
	void DrawKakiKursiKecil3();
	void DrawKakiKursiKecil4();
	void DrawKakiKursiKecil1();
	void DrawPapanKursiKecil();

	void TembokGridKiri();
	void TembokGridTengah();
	void TembokGridKanan();

	void DrawBagianTengahGerobak();
	void DrawBagianTengahGerobak2();
	void DrawBagianAtasGerobak();
	void DrawPapanKursi1();
	void DrawKakiKursi1();
	void DrawKakiKursi2();
	void DrawKakiKursi3();
	void DrawKakiKursi4();
	void DrawPapanMeja1();
	void DrawKakiMeja1();
	void DrawKakiMeja2();
	void DrawKakiMeja3();
	void DrawKakiMeja4();
	void DrawKakiKursi21();
	void DrawKakiKursi22();
	void DrawKakiKursi23();
	void DrawKakiKursi24();
	void DrawPapanKursi2();
	void DrawBadanGerobak();
	void DrawTanganGerobak1();
	void DrawTanganGerobak2();
	void DrawRodaGerobak1();
	void DrawRodaGerobak2();

	void KepalaPenjual();
	void BadanPenjual();
	void TanganPenjualKiri();
	void TanganPenjualKanan();
	void KakiPenjualKanan();
	void KakiPenjualKiri();

	void DrawJalanRaya();
	void DrawJalanRaya2();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

