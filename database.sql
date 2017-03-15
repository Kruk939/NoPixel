/*
Navicat MySQL Data Transfer

Source Server         : StanLakeside
Source Server Version : 50624
Source Host           : 149.202.88.94:3306
Source Database       : nopixel

Target Server Type    : MYSQL
Target Server Version : 50624
File Encoding         : 65001

Date: 2017-03-15 13:05:54
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for actionlog
-- ----------------------------
DROP TABLE IF EXISTS `actionlog`;
CREATE TABLE `actionlog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
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
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=64817 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for adminlog
-- ----------------------------
DROP TABLE IF EXISTS `adminlog`;
CREATE TABLE `adminlog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
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
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=8383 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for coplog
-- ----------------------------
DROP TABLE IF EXISTS `coplog`;
CREATE TABLE `coplog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
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
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=12780 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for craftlog
-- ----------------------------
DROP TABLE IF EXISTS `craftlog`;
CREATE TABLE `craftlog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `classname` varchar(255) NOT NULL,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=6350 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for deathlog
-- ----------------------------
DROP TABLE IF EXISTS `deathlog`;
CREATE TABLE `deathlog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
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
  `distance` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3684 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for economylog
-- ----------------------------
DROP TABLE IF EXISTS `economylog`;
CREATE TABLE `economylog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
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
  `quantity` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=59256 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for garage
-- ----------------------------
DROP TABLE IF EXISTS `garage`;
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
  `damage` varchar(15) NOT NULL DEFAULT '0',
  PRIMARY KEY (`license`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for logs
-- ----------------------------
DROP TABLE IF EXISTS `logs`;
CREATE TABLE `logs` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `uid` varchar(50) NOT NULL,
  `name` varchar(64) NOT NULL,
  `type` varchar(16) NOT NULL,
  `text` varchar(255) NOT NULL,
  `cash` int(13) NOT NULL,
  `bank` int(13) NOT NULL,
  `pos` varchar(50) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=176482 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for mafiaatm
-- ----------------------------
DROP TABLE IF EXISTS `mafiaatm`;
CREATE TABLE `mafiaatm` (
  `atm` int(255) NOT NULL DEFAULT '0',
  `id` int(255) DEFAULT NULL,
  PRIMARY KEY (`atm`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for mail
-- ----------------------------
DROP TABLE IF EXISTS `mail`;
CREATE TABLE `mail` (
  `message` varchar(500) CHARACTER SET latin1 NOT NULL,
  `title` varchar(32) CHARACTER SET latin1 NOT NULL,
  `sender` varchar(32) CHARACTER SET latin1 NOT NULL,
  `receiver` varchar(32) CHARACTER SET latin1 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for messages
-- ----------------------------
DROP TABLE IF EXISTS `messages`;
CREATE TABLE `messages` (
  `message` varchar(256) CHARACTER SET latin1 NOT NULL,
  `title` varchar(64) CHARACTER SET latin1 NOT NULL,
  `sender` varchar(64) CHARACTER SET latin1 NOT NULL,
  `receiver` varchar(64) CHARACTER SET latin1 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for moneylog
-- ----------------------------
DROP TABLE IF EXISTS `moneylog`;
CREATE TABLE `moneylog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
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
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=23772 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `uid` varchar(50) CHARACTER SET utf8 DEFAULT NULL,
  `name` varchar(50) CHARACTER SET utf8 DEFAULT NULL,
  `items` varchar(1500) CHARACTER SET utf8 NOT NULL,
  `cash` int(13) NOT NULL,
  `bank` int(13) NOT NULL,
  `cop` int(13) NOT NULL,
  `ems` int(13) NOT NULL,
  `position` varchar(50) CHARACTER SET utf8 NOT NULL,
  `bankaccount` int(11) NOT NULL AUTO_INCREMENT,
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
  `connected` enum('0','1') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `respawn` int(2) NOT NULL DEFAULT '2',
  PRIMARY KEY (`bankaccount`),
  UNIQUE KEY `uid` (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=929 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for vehiclelog
-- ----------------------------
DROP TABLE IF EXISTS `vehiclelog`;
CREATE TABLE `vehiclelog` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `vehicleClassname` varchar(255) NOT NULL,
  `vehicleName` varchar(255) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=49067 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for wanted
-- ----------------------------
DROP TABLE IF EXISTS `wanted`;
CREATE TABLE `wanted` (
  `caseID` int(11) NOT NULL AUTO_INCREMENT,
  `suspectName` varchar(32) NOT NULL,
  `suspectUID` varchar(30) NOT NULL,
  `officerName` varchar(255) NOT NULL,
  `officerUID` varchar(32) NOT NULL,
  `charges` text NOT NULL,
  `status` tinyint(1) NOT NULL DEFAULT '0',
  `evidence` text NOT NULL,
  `active` enum('0','1') NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`caseID`)
) ENGINE=InnoDB AUTO_INCREMENT=55 DEFAULT CHARSET=utf8;
