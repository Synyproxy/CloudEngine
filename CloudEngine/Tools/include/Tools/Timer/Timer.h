#pragma once

namespace Utils
{
	class Timer
	{
	private:
		Timer() = delete;
		~Timer() = delete;

	public:
		using clock = std::chrono::high_resolution_clock;
		using ms	= std::chrono::duration< double, std::milli>;
		using sec	= std::chrono::duration<double>;

		using frameTime = sec;

		static std::string TimeStampPerso();

	};
}
