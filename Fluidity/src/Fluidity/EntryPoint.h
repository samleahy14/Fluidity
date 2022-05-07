#pragma once

#ifdef FL_PLATFORM_WINDOWS

extern Fluidity::Application* Fluidity::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Fluidity::CreateApplication();
	app->Run();
	delete app;
}

#endif