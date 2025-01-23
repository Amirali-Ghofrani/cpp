#include <iostream>

class Log
{
public:
    enum Level 
    {
        levelError = 0, levelWarning, levelInfo
    };

private:
    Level m_LogLevel = levelInfo;  //we use m_ for member variables too keep our 
                                    //code clean

public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }

    
    void Error(const char* message)
    {
        if(m_LogLevel >= levelError)
            std::cout<<"[ERROR]: "<<message<<std::endl;
    }
    
    void Warn(const char* message)
    {
        if(m_LogLevel >= levelWarning)
            std::cout<<"[WARNING]: "<<message<<std::endl;
    }

    void Info(const char* message)
    {
        if(m_LogLevel >= levelInfo)
            std::cout<<"[INFO]: "<<message<<std::endl;
    }

};


int main()
{

    Log log;
    log.SetLevel(Log::levelWarning);
    log.Error("Hi");
    log.Warn("Hello!");
    log.Info("Hi");

}