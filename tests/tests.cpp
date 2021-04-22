#include "pch.h"
#include "CppUnitTest.h"

#include <pastemyst.hpp>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(tests)
	{
	public:
		
		TEST_METHOD(get_request)
		{
			// TODO: Work on the actual GET request and remove this "dummy" code.
			auto status_code = test();
			Assert::AreEqual(std::to_string(200), std::to_string(status_code), (wchar_t*)"Status code should be 200.");
		}
	};
}
