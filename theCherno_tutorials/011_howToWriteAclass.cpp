#include <iostream>

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;  //we use m_ for member variables too keep our 
                                    //code clean

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    
    void Error(const char* message)
    {
        if(m_LogLevel >= LogLevelError)
            std::cout<<"[ERROR]: "<<message<<std::endl;
    }
    
    void Warn(const char* message)
    {
        if(m_LogLevel >= LogLevelWarning)
            std::cout<<"[WARNING]: "<<message<<std::endl;
    }

    void Info(const char* message)
    {
        if(m_LogLevel >= LogLevelInfo)
            std::cout<<"[INFO]: "<<message<<std::endl;
    }

};


int main()
{

    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Error("Hi");
    log.Warn("Hello!");
    log.Info("Hi");

}