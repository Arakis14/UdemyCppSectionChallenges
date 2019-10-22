#pragma once

class InsufficientFundsException : std::exception
{
public:
    InsufficientFundsException() = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept
    {
        return  "You encountered an exception. Cannot overdraw from an account!";
    }
};

