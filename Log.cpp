#include <iostream>
#include <string>


class Log
{
public:
	enum Level
	{
		ErrorLevel =0, WarningLevel, InfoLevel, DebugLevel
	};
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
	const int LogLevelDebug = 3;

public:

	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(std::string message)
	{
		if (m_LogLevel >= ErrorLevel)
			std::cout << "error: " << message << std::endl;
	}
	void Warning(std::string message)
	{
		if (m_LogLevel >= WarningLevel)
			std::cout << "warning: " << message << std::endl;
	}

	void Info(std::string message)
	{
		if (m_LogLevel >= InfoLevel)
			std::cout << "info: " << message << std::endl;
	}

	void Debug(std::string message)
	{
		if (m_LogLevel >= DebugLevel)
			std::cout << "debug: " << message << std::endl;
	}

private:
	Level m_LogLevel = DebugLevel;

};