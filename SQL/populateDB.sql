-- Ajout du jeu de donn�es de test --
USE [A2POO-AzureDB];

SET IDENTITY_INSERT City ON;
INSERT INTO City (idCity, cityName) VALUES
(1,'Nantes'),
(2,'Lille'),
(3,'Lyon'),
(4,'Bordeaux'),
(5,'Marseille'),
(6,'Reims'),
(7,'Paris'),
(8,'Strasbourg'),
(9,'Toulouse'),
(10,'Montpellier');
SET IDENTITY_INSERT City OFF;

SET IDENTITY_INSERT Address ON;
INSERT INTO Address (idAddress, streetName,
streetNumber, idCity) VALUES 
(1,'Rue de la Paix',2,1),
(2,'Rue du Calvaire',10,1),
(3,'Quai de la Fosse',18,1),
(4,'Place du Commerce',5,1),
(5,'Rue du G�n�rale Bollardi�re',2,1),
(6,'Rue Esquermoise',22,2),
(7,'Place Charles de Gaulle',10,2),
(8,'Rue de Paris',40,2),
(9,'Rue du Molinel',1,2),
(10,'Rue Louis Dupied',7,2),
(11,'Place Bellecour',1,3),
(12,'Rue de la R�publique',7,3),
(13,'Rue Victor Hugo',11,3),
(14,'Rue du B�uf',16,3),
(15,'Avenue des fr�res lumi�res',142,3),
(16,'Rue des Remparts',10,4),
(17,'Rue Sainte-Catherine',7,4),
(18,'Place de la Bourse',2,4),
(19,'Rue des Argentiers',14,4),
(20,'Rue Guillaume Leblanc',151,4),
(21,'Rue de la R�publique',2,5),
(22,'Rue de la Tour',22,5),
(23,'Rue Sainte',43,5),
(24,'Rue Paradis',76,5),
(25,'Boulevard de la Charbonnelle',6,5),
(26,'Rue de Mars',1,6),
(27,'Rue Condorcet',8,6),
(28,'Place Drouet d Erlon',14,6),
(29,'Rue de l Etape',7,6),
(30,'Rue de Courtlancy',5,6),
(31,'Avenue Anatole France',21,7),
(32,'Rue de Rivoli',5,7),
(33,'Rue de Rennes',57,7),
(34,'Rue de la Paix',14,7),
(35,'Place Ousmane Sow ',6,7),
(36,'Rue des Grandes Arcades',5,8),
(37,'Rue du Vieux March� aux Poissons',6,8),
(38,'Rue des Serruriers',13,8),
(39,'Rue des Fr�res',7,8),
(40,'Rue de l Eglise',6,8),
(41,'Rue de Metz',2,9),
(42,'Rue du Taur',7,9),
(43,'Rue Saint-Antoine-du-T',12,9),
(44,'Place Wilson',18,9),
(45,'Route de Saint-Simon',387,9),
(46,'Rue Flaugergues',12,10),
(47,'Rue Raimu',274,10),
(48,'Rue de la Cavalerie',53,10),
(49,'Rue Crova',1,10),
(50,'Quai du Verdanson',29,10),
(51,'Rue de Forest',24,5),
(52,'Rue Sutaine',76,6),
(53,'Rue de Grenelle',140,7),
(54,'Rue de Soultzmatt',13,8),
(55,'Rue de Madagascar',8,9),
(56,'Rue Saint Honor�',221,7),
(57,'Rue de Madrid',22,7),
(58,'Rue Raymond Radiguet',17,7),
(59,'Rue Affre',3,9),
(60,'Rue de Sacy',36,6);
SET IDENTITY_INSERT Address OFF;

SET IDENTITY_INSERT PaymentType ON;
INSERT INTO PaymentType (idPaymentType, typeName) VALUES 
(1,'Carte bancaire'),
(2,'Paypal'),
(3,'Bitcoin');
SET IDENTITY_INSERT PaymentType OFF;

SET IDENTITY_INSERT PaymentMethod ON;
INSERT INTO PaymentMethod (idPaymentMethod, name,
firstName,amount, idPaymentType) VALUES
(1,'Fran�ois','Alice',15.65,1),
(2,'Martinez','Rapha�l',22.80,2),
(3,'Girard','Chlo�',49.20,3),
(4,'Fontaine','Victor',12.73,1),
(5,'Michelain','Eva',5.69,2),
(6,'Mercier','Zo�',61.00,3),
(7,'Dupuis','Jules',5.60,1),
(8,'Lambert','L�na',8.70,2),
(9,'Faure','Simon',8.40,3),
(10,'Troadec','Jeanine',53.80,1),
(11,'Roux','Clara',16.00,2),
(12,'Henry','Robin',13.40,3),
(13,'Fournier','Elisa',11.80,1),
(14,'Masson','Maxime',55.40,2),
(15,'Jaques','M�lanie',8.40,3),
(16,'Dumont','Margaux',13.35,1),
(17,'Chevalier','Gabriel',4.90,2),
(18,'Noel','Louise',11.20,3),
(19,'Marchand','Adrien',5.80,1),
(20,'Cher','Vivient',17.70,2),
(21,'Julien','Oc�ane',23.80,3),
(22,'Guillaume','Louis',45.20,1),
(23,'Vincent','In�s',11.00,2),
(24,'Barbier','Timoth�e',6.65,3),
(25,'Vill�s','Titouan',7.70,1),
(26,'Denis','Ana�s',9.60,2),
(27,'Morel','Benjamin',98.60,3),
(28,'Hubert','Mathilde',21.17,1),
(29,'Gauthier','Cl�mentine',9.83,2),
(30,'Grand','Giselle',19.00,3);
SET IDENTITY_INSERT PaymentMethod OFF;

SET IDENTITY_INSERT Employee ON;
INSERT INTO Employee(idEmployee, name, firstName,
startDate, idAddress) VALUES
(1,'Dupont','Marie','2015-02-10',1),
(2,'Martin','Pierre','2013-04-20',2),
(3,'Bernard','Sophie','2014-06-05',3),
(4,'Dubois','Antoine','2013-08-08',4),
(5,'Flandre','Guillaume','2015-12-09',5),
(6,'Thomas','Camille','2015-11-11',6),
(7,'Robert','Nicolas','2013-12-14',7),
(8,'Richard','Juliette','2014-02-17',8),
(9,'Petit','Thomas','2014-04-20',9),
(10,'Carat','Jean','2014-04-25',10),
(11,'Durand','Emma','2015-06-23',11),
(12,'Leroy','Lucas','2014-08-26',12),
(13,'Moreau','Charlotte','2014-11-29',13),
(14,'Simon','Baptiste','2013-12-22',14),
(15,'Verand','G�rard','2016-08-07',15),
(16,'Laurent','L�a','2015-02-27',16),
(17,'Lefevre','Hugo','2015-04-30',17),
(18,'Garcia','Manon','2013-07-10',18),
(19,'Bonnet','Th�o','2013-09-03',19),
(20,'Levallet','Th�odore','2014-05-05',20);
SET IDENTITY_INSERT Employee OFF;

SET IDENTITY_INSERT Client ON;
INSERT INTO Client(idClient, name, firstName, birthDate,
firstOrderDate) VALUES
(1,'Fran�ois','Alice','1977-12-08','2018-08-08'),
(2,'Martinez','Rapha�l','1991-05-25','2020-01-06'),
(3,'Girard','Chlo�','1974-03-02','2015-03-09'),
(4,'Fontaine','Victor','1983-10-11','2017-05-12'),
(5,'Michelain','Eva','1978-11-20','2014-07-15'),
(6,'Mercier','Zo�','1990-12-31','2017-05-15'),
(7,'Dupuis','Jules','1979-07-16','2019-10-18'),
(8,'Lambert','L�na','1988-06-03','2021-11-21'),
(9,'Faure','Simon','1987-01-26','2014-12-24'),
(10,'Troadec','Jeanine','1985-09-26','2019-01-27'),
(11,'Roux','Clara','1968-04-20','2020-07-25'),
(12,'Henry','Robin','1992-11-13','2020-03-30'),
(13,'Fournier','Elisa','1976-09-05','2017-05-20'),
(14,'Masson','Maxime','1980-12-30','2016-07-05'),
(15,'Jaques','M�lanie','1984-06-28','2021-09-08'),
(16,'Dumont','Margaux','1996-08-24','2014-06-08'),
(17,'Chevalier','Gabriel','1974-05-10','2020-11-11'),
(18,'Noel','Louise','1984-01-29','2019-12-14'),
(19,'Marchand','Adrien','1997-06-21','2018-02-17'),
(20,'Cher','Vivient','1986-07-21','2014-04-20'),
(21,'Julien','Oc�ane','1971-03-08','2015-05-17'),
(22,'Guillaume','Louis','1988-09-12','2022-06-23'),
(23,'Vincent','In�s','1976-02-06','2022-08-26'),
(24,'Barbier','Timoth�e','1993-10-18','2021-11-29'),
(25,'Vill�s','Titouan','1989-06-15','2020-12-22'),
(26,'Denis','Ana�s','1970-05-27','2019-02-20'),
(27,'Morel','Benjamin','1997-11-19','2018-02-27'),
(28,'Hubert','Mathilde','1984-06-14','2017-04-30'),
(29,'Gauthier','Cl�mentine','1973-08-02','2016-07-01'),
(30,'Grand','Giselle','1987-08-06','2014-09-03');
SET IDENTITY_INSERT Client OFF;

SET IDENTITY_INSERT Item ON;
INSERT INTO Item(idItem, name, reference, quantity,
availableQuantity, quantityThreshold, supplierPrice,
unitPrice, vatRate) VALUES
(1,'Transistors',3727,118,118,68,1.9,2.00,0.20),
(2,'R�gulateur',3728,100,100,50,0.5,0.45,0.20),
(3,'Thyristors',5389,123,123,73,1,1.10,0.20),
(4,'Circuit EPLD',4205,193,193,143.2,2,10,0.20),
(5,'Circuit int�gr�',7220,141,141,91,0.1,0.20,0.20),
(6,'Diode',5024,185,185,135,0.2,0.30,0.20),
(7,'Microcontr�leur',4548,97,97,47,0.5,0.35,0.20),
(8,'Circuit logique',4397,134,134,84,0.9,1.00,0.20),
(9,'Condensateur c�ramique',7155,147,147,97,0.5,0.45,0.20),
(10,'Condensateur polyester',6780,102,102,52,0.9,1.00,0.20),
(11,'Condensateur classe',3966,121,121,71.1,1,10,0.20),
(12,'Condensateur tantale',7384,204,204,154,0.8,0.90,0.20),
(13,'Condensateur chimique',4276,160,160,110,1.9,2.00,0.20),
(14,'Photor�sistances',7078,185,185,135,1.2,1.30,0.20),
(15,'Potentiom�tre',3731,101,101,51,0.5,0.65,0.20),
(16,'R�sistance carbone',5281,122,122,72,0.7,0.80,0.20),
(17,'R�sistance m�tal',5340,93,93,43,1.9,2.00,0.20),
(18,'R�sistance CMS',4957,119,119,69,1.1,1.20,0.20),
(19,'Varistance',3894,220,220,170,0.5,0.60,0.20),
(20,'Afficheur � LEDs',6057,164,164,114,0.9,1.00,0.20),
(21,'Afficheur LCD',5654,134,134,84,1.9,2.00,0.20),
(22,'Afficheur graphique',6000,171,171,121,0.5,0.45,0.20),
(23,'Ampoule miniature',6773,212,212,162,0.1,0.20,0.20),
(24,'Lampe ballon',5014,169,169,119,1.8,1.90,0.20);
SET IDENTITY_INSERT Item OFF;

SET IDENTITY_INSERT Purchase ON;
INSERT INTO Purchase (idPurchase, purchaseDate, payDate,
deliveryDate, discountAmount, dutyFreePrice, vatAmount,
ttcPrice, idPaymentAddress, idDeliveryAddress, idClient) VALUES
(1,'2022-12-02','2022-12-02','2022-12-09',0.15,13,4.6,15.65,58,58,28),
(2,'2023-12-03','2023-12-03','2023-12-08',0.10,20,4.8,22.80,36,36,16),
(3,'2021-11-04','2021-11-04','2021-11-07',0.00,40,9.2,49.20,55,45,25),
(4,'2020-02-05','2020-02-05','2020-02-10',0.07,10,3.4,12.73,53,43,23),
(5,'2021-03-06','2021-03-06','2021-03-13',0.14,5,1.4,5.69,52,42,22),
(6,'2020-10-07','2020-10-07','2020-10-14',0.22,60,14,61.00,56,46,26),
(7,'2023-08-08','2023-08-08','2023-08-10',0.25,4,2.6,5.60,34,34,14),
(8,'2021-06-09','2021-06-09','2021-06-12',0.30,7,3.8,8.70,30,30,10),
(9,'2023-01-10','2023-01-10','2023-01-16',0.20,8,2,8.40,29,29,9),
(10,'2020-01-11','2020-01-11','2020-01-15',0.60,87,19,53.80,38,38,18),
(11,'2023-05-12','2023-05-12','2023-05-19',0.50,20,6,16.00,32,32,12),
(12,'2023-12-13','2023-12-13','2023-12-18',0.10,10,4.4,13.40,57,47,27),
(13,'2022-11-14','2022-11-14','2022-11-17',0.10,10,2.8,11.80,21,21,1),
(14,'2021-10-15','2021-10-15','2021-10-20',0.00,45,10.4,55.40,24,24,4),
(15,'2021-06-16','2021-06-16','2021-06-23',0.10,6,3,8.40,37,37,17),
(16,'2022-07-17','2022-07-17','2022-07-22',0.05,9,4.8,13.35,51,41,21),
(17,'2023-04-18','2023-04-18','2023-04-26',0.10,3,2.2,4.90,60,50,30),
(18,'2023-01-19','2023-01-19','2023-01-25',0.10,10,2.2,11.20,35,35,15),
(19,'2022-04-20','2022-04-20','2022-04-24',0.00,4,1.8,5.80,54,44,24),
(20,'2022-05-21','2022-05-21','2022-05-27',0.10,15,4.2,17.70,40,40,20),
(21,'2023-06-22','2023-06-22','2023-06-26',0.05,20,4.8,23.80,27,27,7),
(22,'2021-07-23','2021-07-23','2021-07-28',0.10,40,9.2,45.20,25,25,5),
(23,'2023-08-24','2023-08-24','2023-08-30',0.20,10,3,11.00,28,28,8),
(24,'2020-09-25','2020-09-25','2020-09-30',0.15,5,2.4,6.65,33,33,13),
(25,'2020-09-26','2020-09-26','2020-10-01',0.10,7,1.4,7.70,26,26,6),
(26,'2023-08-08','2023-08-08','2023-08-10',0.00,8,1.6,9.60,31,31,11),
(27,'2023-06-09','2023-06-09','2023-06-13',0.07,87,17.4,98.60,23,23,3),
(28,'2023-01-10','2023-01-10','2023-01-17',0.14,20,4,21.17,59,49,29),
(29,'2023-01-11','2023-01-11','2023-01-16',0.22,10,2,9.83,22,22,2),
(30,'2023-04-20','2023-04-20','2023-04-26',0.25,20,4,19.00,39,39,19),
(31,'2023-01-16','2023-01-16','2023-01-19',0.30,4,0.8,3.60,52,42,22),
(32,'2022-04-21','2022-04-21','2022-04-25',0.20,7,1.4,7.00,32,32,12),
(33,'2022-05-04','2022-05-04','2022-05-10',0.60,8,1.6,4.80,35,35,15),
(34,'2022-08-22','2022-08-22','2022-08-30',0.50,87,17.4,60.90,26,26,6),
(35,'2020-07-13','2020-07-13','2020-07-19',0.10,20,4,22.00,53,43,23),
(36,'2021-09-23','2021-09-23','2021-09-30',0.10,10,2,11.00,57,47,27),
(37,'2021-01-04','2021-01-04','2021-01-10',0.00,10,2,12.00,28,28,8),
(38,'2020-02-05','2020-02-05','2020-02-09',0.10,45,9,49.50,33,33,13),
(39,'2021-06-02','2021-06-02','2021-06-08',0.05,6,1.2,6.90,36,36,16),
(40,'2022-12-29','2022-12-29','2023-01-07',0.00,9,1.8,10.80,24,24,4),
(41,'2023-12-23','2022-12-23','2023-01-01',0.10,3,0.6,3.30,22,22,2),
(42,'2021-11-15','2021-11-15','2021-11-20',0.10,50,10,55.00,31,31,11),
(43,'2020-02-06','2020-02-06','2020-02-10',0.00,60,12,72.00,51,41,21),
(44,'2021-03-05','2021-03-05','2021-03-12',0.10,52,10.4,57.20,27,27,7),
(45,'2020-10-08','2020-10-08','2020-10-13',0.05,13,2.6,14.95,25,25,5),
(46,'2021-08-08','2021-08-08','2021-08-12',0.00,51,10.2,61.20,60,50,30),
(47,'2021-06-10','2021-06-10','2021-06-20',0.00,23,4.6,27.60,26,26,6),
(48,'2023-01-29','2023-01-29','2023-02-03',0.15,45,9,47.25,36,36,16),
(49,'2020-01-28','2020-01-28','2021-02-06',0.10,42,8.4,46.20,29,29,9),
(50,'2023-05-13','2023-05-13','2023-05-18',0.00,19,3.8,22.80,55,45,25),
(51,'2023-12-17','2023-12-17','2023-12-21',0.07,54,10.8,61.20,23,23,3),
(52,'2022-11-06','2022-11-06','2022-11-15',0.14,6,1.2,6.35,37,37,17),
(53,'2021-10-14','2021-10-14','2021-10-16',0.22,2,0.4,1.97,40,40,20),
(54,'2021-06-17','2021-06-17','2021-06-20',0.25,3,0.6,2.85,54,44,24),
(55,'2022-07-19','2022-07-19','2022-07-25',0.30,63,12.6,56.70,21,21,1),
(56,'2023-02-10','2023-02-10','2023-02-19',0.20,21,4.2,21.00,38,38,18),
(57,'2023-01-28','2023-01-28','2023-01-31',0.60,90,18,54.00,30,30,10),
(58,'2022-04-22','2022-04-22','2022-04-30',0.50,21,4.2,14.70,32,32,12);
SET IDENTITY_INSERT Purchase OFF;

SET IDENTITY_INSERT PurchasedItem ON;
INSERT INTO PurchasedItem (idPurchasedItem, itemAmount,
totalPrice, vatAmount, idPurchase, idItem) VALUES
(1,10,156.50,12,1,1),
(2,4,91.20,4.8,2,2),
(3,6,295.20,7.2,3,3),
(4,7,89.13,8.4,4,4),
(5,2,11.38,2.4,5,5),
(6,10,610.00,12,6,6),
(7,9,50.40,10.8,7,7),
(8,12,104.40,14.4,8,8),
(9,2,16.80,2.4,9,9),
(10,8,430.40,9.6,10,10),
(11,10,160.00,12,11,11),
(12,12,160.80,14.4,12,12),
(13,4,47.20,4.8,13,13),
(14,7,387.80,8.4,14,14),
(15,9,75.60,10.8,15,15),
(16,15,200.25,18,16,16),
(17,8,39.20,9.6,17,17),
(18,1,11.20,1.2,18,18),
(19,5,29.00,6,19,19),
(20,6,106.20,7.2,20,20),
(21,4,95.20,4.8,21,21),
(22,6,271.20,7.2,22,22),
(23,5,55.00,6,23,23),
(24,7,46.55,8.4,24,24);
SET IDENTITY_INSERT PurchasedItem OFF;

INSERT INTO paid_with (idPurchase, idPaymentMethod) VALUES
(1, 28),
(2, 16),
(3, 25),
(4, 23),
(5, 22),
(6, 26),
(7, 14),
(8, 10),
(9, 9),
(10, 18),
(11, 12),
(12, 27),
(13, 1),
(14, 4),
(15, 17),
(16, 21),
(17, 30),
(18, 15),
(19, 24),
(20, 20),
(21, 7),
(22, 5),
(23, 8),
(24, 13),
(25, 6),
(26, 11),
(27, 3),
(28, 29),
(29, 2),
(30, 19),
(31, 22),
(32, 12),
(33, 15),
(34, 6),
(35, 23),
(36, 27),
(37, 8),
(38, 13),
(39, 16),
(40, 4),
(41, 2),
(42, 11),
(43, 21),
(44, 7),
(45, 5),
(46, 30),
(47, 6),
(48, 16),
(49, 9),
(50, 25),
(51, 3),
(52, 17),
(53, 20),
(54, 24),
(55, 1),
(56, 18),
(57, 10),
(58, 12);

--SET IDENTITY_INSERT manage OFF;
INSERT INTO manage (subordinate, superior) VALUES
(2,1),
(4,3),
(6,5),
(7,10),
(8,19),
(9,1),
(11,3),
(12,5),
(13,10),
(14,19),
(15,1),
(16,3),
(17,5),
(18,10),
(20,19);
--SET IDENTITY_INSERT manage ON;
