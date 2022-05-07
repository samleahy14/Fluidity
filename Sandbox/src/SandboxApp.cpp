#include <Fluidity.h>

class Sandbox : public Fluidity::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Fluidity::Application* Fluidity::CreateApplication()
{
	return new Sandbox();
}