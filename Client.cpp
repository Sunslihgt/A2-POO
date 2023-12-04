#include "Client.h"

Client::Client(int id, bool isCreated, System::String^ name, System::String^ firstName, DateTime birthDate, DateTime firstOrderDate, std::array<deliveryAddresses, sizeof Address>, std::array<billingAddresses, sizeof Address>, std::array<purchases, sizeof Purchase>)
{
    throw gcnew System::NotImplementedException();
}

void Client::getClientByid(int id)
{
    throw gcnew System::NotImplementedException();
}

void Client::getClients(System::String^ name, System::String^ firstName, DateTime birthDate, DateTime firstOrderDate, std::array<deliveryAddresses, sizeof Address>, std::array<billingAddresses, sizeof Address>, std::array<purchases, sizeof Purchase>)
{
    throw gcnew System::NotImplementedException();
}
