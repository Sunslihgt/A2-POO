USE [A2POO-AzureDB];

CREATE TABLE City(
   idCity INT IDENTITY(1,1) NOT NULL,
   cityName VARCHAR(50) NOT NULL,
   PRIMARY KEY(idCity)
);

CREATE TABLE Address(
   idAddress INT IDENTITY(1,1) NOT NULL,
   streetName VARCHAR(50) NOT NULL,
   streetNumber INT NOT NULL,
   idCity INT NOT NULL,
   PRIMARY KEY(idAddress),
   FOREIGN KEY(idCity) REFERENCES City(idCity)
);

CREATE TABLE Employee(
   idEmployee INT IDENTITY(1,1) NOT NULL,
   name VARCHAR(50) NOT NULL,
   firstName VARCHAR(50) NOT NULL,
   startDate DATE NOT NULL,
   idAddress INT NOT NULL,
   PRIMARY KEY(idEmployee),
   FOREIGN KEY(idAddress) REFERENCES Address(idAddress)
);

CREATE TABLE Client(
   idClient INT IDENTITY(1,1) NOT NULL,
   name VARCHAR(50) NOT NULL,
   firstName VARCHAR(50) NOT NULL,
   birthDate DATE NOT NULL,
   firstOrderDate DATE,
   PRIMARY KEY(idClient)
);

CREATE TABLE Item(
   idItem INT IDENTITY(1,1) NOT NULL,
   name VARCHAR(50) NOT NULL,
   reference VARCHAR(50) NOT NULL,
   quantity INT NOT NULL,
   availableQuantity INT NOT NULL,
   quantityThreshold INT NOT NULL,
   supplierPrice DECIMAL(15,2) NOT NULL,
   unitPrice DECIMAL(15,2) NOT NULL,
   vatRate DECIMAL(15,2) NOT NULL,
   PRIMARY KEY(idItem)
);

CREATE TABLE Purchase(
   idPurchase INT IDENTITY(1,1) NOT NULL,
   purchaseDate DATE NOT NULL,
   deliveryDate DATE NOT NULL,
   discountAmount DECIMAL(15,2) NOT NULL,
   dutyFreePrice DECIMAL(15,2),
   vatAmount DECIMAL(15,2),
   ttcPrice DECIMAL(15,2),
   idDeliveryAddress INT NOT NULL,
   idClient INT NOT NULL,
   PRIMARY KEY(idPurchase),
   FOREIGN KEY(idDeliveryAddress) REFERENCES Address(idAddress),
   FOREIGN KEY(idClient) REFERENCES Client(idClient)
);

CREATE TABLE PurchasedItem(
   idPurchasedItem INT IDENTITY(1,1),
   itemAmount INT,
   totalPrice DECIMAL(15,2),
   vatAmount DECIMAL(15,2),
   idPurchase INT NOT NULL,
   idItem INT NOT NULL,
   PRIMARY KEY(idPurchasedItem),
   FOREIGN KEY(idPurchase) REFERENCES Purchase(idPurchase),
   FOREIGN KEY(idItem) REFERENCES Item(idItem)
);

CREATE TABLE PaymentType(
   idPaymentType INT IDENTITY(1,1) NOT NULL,
   typeName VARCHAR(50) NOT NULL,
   PRIMARY KEY(idPaymentType)
);

CREATE TABLE PaymentMethod(
   idPaymentMethod INT IDENTITY(1,1) NOT NULL,
   name VARCHAR(50) NOT NULL,
   firstName VARCHAR(50) NOT NULL,
   amount DECIMAL(15,2) NOT NULL,
   payDate DATE NOT NULL,
   idPaymentAddress INT NOT NULL,
   idPaymentType INT NOT NULL,
   idPurchase INT NOT NULL,
   PRIMARY KEY(idPaymentMethod),
   FOREIGN KEY(idPaymentAddress) REFERENCES Address(idAddress),
   FOREIGN KEY(idPaymentType) REFERENCES PaymentType(idPaymentType),
   FOREIGN KEY(idPurchase) REFERENCES Purchase(idPurchase)
);

CREATE TABLE manage(
   subordinate INT NOT NULL,
   superior INT NOT NULL,
   PRIMARY KEY(subordinate, superior),
   FOREIGN KEY(subordinate) REFERENCES Employee(idEmployee),
   FOREIGN KEY(superior) REFERENCES Employee(idEmployee)
);
