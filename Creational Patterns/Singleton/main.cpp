#include <iostream>
#include <mutex>


class Logger
{
private:
	static Logger* m_instance;
	static std::mutex mtx;

	Logger()
	{
	}

public:

	void doWork()
	{
		std::cout << " Working " << std::endl;
	}

	Logger(Logger& obj) = delete;

	static Logger* getInstance()
	{
		
		if (m_instance == nullptr)
		{
			mtx.lock();
			m_instance = new Logger();
			mtx.unlock();
			return m_instance;
			
		}
		else
		{
			return m_instance;
			
		}
		mtx.unlock();

	}
};

Logger* Logger::m_instance = nullptr;

int main()
{
	Logger* logger = Logger::getInstance();

	logger->doWork();

}