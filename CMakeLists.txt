cmake_minimum_required(VERSION 3.15)
project(Simulator_Interpreter)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(Simulator_Interpreter main.cpp Interpreter.h Interpreter.cpp
        Command.h OpenDataServerCommand.cpp OpenDataServerCommand.h
        Expression.h Lexer.cpp Lexer.h RunProgramm.cpp RunProgramm.h PrintCommand.cpp
        PrintCommand.h SleepCommand.cpp SleepCommand.h IfCommand.cpp IfCommand.h WhileCommand.cpp
        WhileCommand.h ConditionParser.cpp ConditionParser.h AssignVarCommand.cpp AssignVarCommand.h DataBase.cpp DataBase.h DefineVarCommand.cpp
        DefineVarCommand.h Math.cpp Math.h Condition.h Condition.cpp
        ConnectCommand.cpp ConnectCommand.h)
