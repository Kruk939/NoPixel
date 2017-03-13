-- phpMyAdmin SQL Dump
-- version 4.6.3
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Czas generowania: 13 Mar 2017, 13:13
-- Wersja serwera: 5.7.13
-- Wersja PHP: 7.0.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `nopixel`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `actionlog`
--

CREATE TABLE `actionlog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `amount` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `adminlog`
--

CREATE TABLE `adminlog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `amount` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `companies`
--

CREATE TABLE `companies` (
  `id` int(11) NOT NULL,
  `short_name` varchar(10) NOT NULL,
  `name` varchar(255) NOT NULL,
  `bank` int(13) NOT NULL DEFAULT '0',
  `uid_owner` varchar(50) NOT NULL,
  `members_current` int(3) NOT NULL DEFAULT '1',
  `members_max` int(3) DEFAULT '5',
  `level` int(2) NOT NULL DEFAULT '1',
  `date_create` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `company_garage`
--

CREATE TABLE `company_garage` (
  `id` int(11) NOT NULL,
  `id_company` int(11) NOT NULL,
  `license` varchar(7) NOT NULL,
  `class` varchar(64) NOT NULL,
  `color` varchar(32) NOT NULL,
  `finish` varchar(32) NOT NULL,
  `rims` varchar(32) NOT NULL,
  `statuses` text NOT NULL,
  `windows` int(1) NOT NULL DEFAULT '0',
  `lights` int(1) NOT NULL,
  `fuel` varchar(15) NOT NULL DEFAULT '1',
  `damage` varchar(15) NOT NULL DEFAULT '0',
  `active` enum('0','1') NOT NULL DEFAULT '0',
  `level` int(2) NOT NULL DEFAULT '1',
  `skin` varchar(255) NOT NULL DEFAULT '',
  `date_bought` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `company_members`
--

CREATE TABLE `company_members` (
  `id` int(11) NOT NULL,
  `id_company` int(11) NOT NULL,
  `uid_player` varchar(50) NOT NULL,
  `level` int(11) NOT NULL,
  `date_added` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `coplog`
--

CREATE TABLE `coplog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `amount` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `craftlog`
--

CREATE TABLE `craftlog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `classname` varchar(255) NOT NULL,
  `name` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `deathlog`
--

CREATE TABLE `deathlog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `weapon` varchar(100) NOT NULL,
  `distance` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `economylog`
--

CREATE TABLE `economylog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `price` varchar(100) NOT NULL,
  `item` varchar(100) NOT NULL,
  `quantity` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `garage`
--

CREATE TABLE `garage` (
  `license` varchar(7) NOT NULL,
  `class` varchar(64) NOT NULL,
  `color` varchar(32) NOT NULL,
  `finish` varchar(32) NOT NULL,
  `rims` varchar(32) NOT NULL,
  `owner` varchar(32) NOT NULL,
  `statuses` text NOT NULL,
  `windows` int(1) NOT NULL DEFAULT '0',
  `lights` int(1) NOT NULL DEFAULT '0',
  `fuel` varchar(15) NOT NULL DEFAULT '1',
  `damage` varchar(15) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `logs`
--

CREATE TABLE `logs` (
  `ID` int(11) NOT NULL,
  `uid` varchar(50) NOT NULL,
  `name` varchar(64) NOT NULL,
  `type` varchar(16) NOT NULL,
  `text` varchar(255) NOT NULL,
  `cash` int(13) NOT NULL,
  `bank` int(13) NOT NULL,
  `pos` varchar(50) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `mafiaatm`
--

CREATE TABLE `mafiaatm` (
  `atm` int(255) NOT NULL DEFAULT '0',
  `id` int(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `mail`
--

CREATE TABLE `mail` (
  `message` varchar(500) CHARACTER SET latin1 NOT NULL,
  `title` varchar(32) CHARACTER SET latin1 NOT NULL,
  `sender` varchar(32) CHARACTER SET latin1 NOT NULL,
  `receiver` varchar(32) CHARACTER SET latin1 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `messages`
--

CREATE TABLE `messages` (
  `message` varchar(256) CHARACTER SET latin1 NOT NULL,
  `title` varchar(64) CHARACTER SET latin1 NOT NULL,
  `sender` varchar(64) CHARACTER SET latin1 NOT NULL,
  `receiver` varchar(64) CHARACTER SET latin1 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `moneylog`
--

CREATE TABLE `moneylog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `amount` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `users`
--

CREATE TABLE `users` (
  `uid` varchar(50) CHARACTER SET utf8 DEFAULT NULL,
  `name` varchar(50) CHARACTER SET utf8 DEFAULT NULL,
  `items` varchar(1500) CHARACTER SET utf8 NOT NULL,
  `cash` int(13) NOT NULL,
  `bank` int(13) NOT NULL,
  `cop` int(13) NOT NULL,
  `ems` int(13) NOT NULL,
  `position` varchar(50) CHARACTER SET utf8 NOT NULL,
  `bankaccount` int(11) NOT NULL,
  `phoneBackground` varchar(50) CHARACTER SET utf8 NOT NULL,
  `messages` varchar(5000) CHARACTER SET utf8 NOT NULL,
  `statuses` text CHARACTER SET utf8 NOT NULL,
  `houselevel` enum('1','2','3','4','5','6','7','8','9','10') CHARACTER SET utf8 NOT NULL DEFAULT '1',
  `housecontent` varchar(1500) CHARACTER SET utf8 NOT NULL,
  `shopcontent` varchar(1500) CHARACTER SET utf8 NOT NULL,
  `shopname` varchar(32) CHARACTER SET utf8 NOT NULL,
  `mafia` enum('0','1','2','3','4','5','6','7','8','9','10') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `fire` enum('0','1','2','3','4','5','6','7','8','9','10') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `legal` enum('0','1','2','3','4','5','6','7','8','9','10') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `prisontime` varchar(10) NOT NULL DEFAULT '0',
  `prisonreason` varchar(128) CHARACTER SET utf8 NOT NULL,
  `mayor` enum('0','1') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `doughnuts` enum('0','1','2','3','4','5') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `connected` enum('0','1') CHARACTER SET utf8 NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `vehiclelog`
--

CREATE TABLE `vehiclelog` (
  `ID` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `vehicleClassname` varchar(255) NOT NULL,
  `vehicleName` varchar(255) NOT NULL,
  `amount` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `wanted`
--

CREATE TABLE `wanted` (
  `caseID` int(11) NOT NULL,
  `suspectName` varchar(32) NOT NULL,
  `suspectUID` varchar(30) NOT NULL,
  `officerName` varchar(255) NOT NULL,
  `officerUID` varchar(32) NOT NULL,
  `charges` text NOT NULL,
  `status` tinyint(1) NOT NULL DEFAULT '0',
  `evidence` text NOT NULL,
  `active` enum('0','1') NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Indeksy dla zrzutów tabel
--

--
-- Indexes for table `actionlog`
--
ALTER TABLE `actionlog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `adminlog`
--
ALTER TABLE `adminlog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `companies`
--
ALTER TABLE `companies`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `company_garage`
--
ALTER TABLE `company_garage`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `company_members`
--
ALTER TABLE `company_members`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `coplog`
--
ALTER TABLE `coplog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `craftlog`
--
ALTER TABLE `craftlog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `deathlog`
--
ALTER TABLE `deathlog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `economylog`
--
ALTER TABLE `economylog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `garage`
--
ALTER TABLE `garage`
  ADD PRIMARY KEY (`license`);

--
-- Indexes for table `logs`
--
ALTER TABLE `logs`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `mafiaatm`
--
ALTER TABLE `mafiaatm`
  ADD PRIMARY KEY (`atm`);

--
-- Indexes for table `moneylog`
--
ALTER TABLE `moneylog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`bankaccount`),
  ADD UNIQUE KEY `uid` (`uid`);

--
-- Indexes for table `vehiclelog`
--
ALTER TABLE `vehiclelog`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `wanted`
--
ALTER TABLE `wanted`
  ADD PRIMARY KEY (`caseID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT dla tabeli `actionlog`
--
ALTER TABLE `actionlog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=50037;
--
-- AUTO_INCREMENT dla tabeli `adminlog`
--
ALTER TABLE `adminlog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7777;
--
-- AUTO_INCREMENT dla tabeli `companies`
--
ALTER TABLE `companies`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT dla tabeli `company_garage`
--
ALTER TABLE `company_garage`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT dla tabeli `company_members`
--
ALTER TABLE `company_members`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
--
-- AUTO_INCREMENT dla tabeli `coplog`
--
ALTER TABLE `coplog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9556;
--
-- AUTO_INCREMENT dla tabeli `craftlog`
--
ALTER TABLE `craftlog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5744;
--
-- AUTO_INCREMENT dla tabeli `deathlog`
--
ALTER TABLE `deathlog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2830;
--
-- AUTO_INCREMENT dla tabeli `economylog`
--
ALTER TABLE `economylog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=44638;
--
-- AUTO_INCREMENT dla tabeli `logs`
--
ALTER TABLE `logs`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=150118;
--
-- AUTO_INCREMENT dla tabeli `moneylog`
--
ALTER TABLE `moneylog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17997;
--
-- AUTO_INCREMENT dla tabeli `users`
--
ALTER TABLE `users`
  MODIFY `bankaccount` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=849;
--
-- AUTO_INCREMENT dla tabeli `vehiclelog`
--
ALTER TABLE `vehiclelog`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=36738;
--
-- AUTO_INCREMENT dla tabeli `wanted`
--
ALTER TABLE `wanted`
  MODIFY `caseID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=37;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
