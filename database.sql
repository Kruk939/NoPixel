/*
Navicat MySQL Data Transfer

Source Server         : lakeside
Source Server Version : 50624
Source Host           : 149.202.88.94:3306
Source Database       : nopixel

Target Server Type    : MYSQL
Target Server Version : 50624
File Encoding         : 65001

Date: 2017-02-05 05:38:54
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
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for garage
-- ----------------------------
DROP TABLE IF EXISTS `garage`;
CREATE TABLE `garage` (
  `license` varchar(32) NOT NULL,
  `class` varchar(64) NOT NULL,
  `color` varchar(32) NOT NULL,
  `finish` varchar(32) NOT NULL,
  `rims` varchar(32) NOT NULL,
  `owner` varchar(32) NOT NULL,
  `statuses` text NOT NULL,
  `windows` int(1) NOT NULL DEFAULT '0',
  `lights` int(1) NOT NULL DEFAULT '0',
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
) ENGINE=InnoDB AUTO_INCREMENT=52151 DEFAULT CHARSET=latin1;

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
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `uid` varchar(50) CHARACTER SET latin1 DEFAULT NULL,
  `name` varchar(50) CHARACTER SET latin1 DEFAULT NULL,
  `items` varchar(1500) CHARACTER SET latin1 NOT NULL,
  `cash` int(13) NOT NULL,
  `bank` int(13) NOT NULL,
  `cop` int(13) NOT NULL,
  `ems` int(13) NOT NULL,
  `position` varchar(50) CHARACTER SET latin1 NOT NULL,
  `bankaccount` int(11) NOT NULL AUTO_INCREMENT,
  `phoneBackground` varchar(50) CHARACTER SET latin1 NOT NULL,
  `messages` varchar(5000) CHARACTER SET latin1 NOT NULL,
  `statuses` text CHARACTER SET latin1 NOT NULL,
  `houselevel` enum('1','2','3') CHARACTER SET latin1 NOT NULL DEFAULT '1',
  `housecontent` varchar(1500) CHARACTER SET latin1 NOT NULL,
  `shopcontent` varchar(1500) CHARACTER SET latin1 NOT NULL,
  `shopname` varchar(32) CHARACTER SET latin1 NOT NULL,
  `mafia` enum('0','1','2','3','4','5','6','7','8','9','10') CHARACTER SET latin1 NOT NULL DEFAULT '0',
  `fire` enum('0','1','2','3','4','5','6','7','8','9','10') CHARACTER SET latin1 NOT NULL DEFAULT '0',
  `legal` enum('0','1','2','3','4','5','6','7','8','9','10') CHARACTER SET latin1 NOT NULL DEFAULT '0',
  `prison` tinyint(1) NOT NULL DEFAULT '0',
  `prisonreason` varchar(32) CHARACTER SET latin1 NOT NULL,
  `mayor` enum('0','1') CHARACTER SET latin1 NOT NULL DEFAULT '0',
  `doughnuts` enum('0','1','2','3','4','5') CHARACTER SET latin1 NOT NULL DEFAULT '0',
  `connected` enum('0','1') CHARACTER SET latin1 NOT NULL DEFAULT '0',
  PRIMARY KEY (`bankaccount`),
  UNIQUE KEY `uid` (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=620 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for wanted
-- ----------------------------
DROP TABLE IF EXISTS `wanted`;
CREATE TABLE `wanted` (
  `suspectID` varchar(32) CHARACTER SET utf8 NOT NULL,
  `officerGUID` varchar(32) CHARACTER SET utf8 NOT NULL,
  `charges` text CHARACTER SET utf8 NOT NULL,
  `status` tinyint(1) NOT NULL DEFAULT '0',
  `evidence` text CHARACTER SET utf8 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
