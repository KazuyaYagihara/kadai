#include <DxLib.h>


bool SysInit(void)
{
	SetGraphMode(640, 480, 32);
	SetWindowText(L"2016036_î™ñÿå¥òañÁ");
	ChangeWindowMode(true);

	if (DxLib_Init() == -1)
	{
		return false;
	}
	return true;
}




int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdshow)
{
	if (!SysInit())
	{
		return  -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);


	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{

		//èâä˙âª

		//çXêV


		//ï`âÊ

		ClsDrawScreen();

		DrawBox(100, 100, 200, 200, 0xffffff, true);
		/*std::ostringstream oss;
		oss << "x=" << rcA.ccenter.y;
		OutputDebugStringA(oss,str()c_str());*/
		OutputDebugStringA("ScreenFlip\n");
		ScreenFlip();

		//âï˙

	}

	return 1;
	DxLib_End();

}



