/*
Navicat MySQL Data Transfer

Source Server         : StanLakeside
Source Server Version : 50624
Source Host           : 149.202.88.94:3306
Source Database       : nopixel

Target Server Type    : MYSQL
Target Server Version : 50624
File Encoding         : 65001

Date: 2017-04-30 17:27:43
*/

SET FOREIGN_KEY_CHECKS=0;

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
-- Table structure for log_action
-- ----------------------------
DROP TABLE IF EXISTS `log_action`;
CREATE TABLE `log_action` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=216602 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_admin
-- ----------------------------
DROP TABLE IF EXISTS `log_admin`;
CREATE TABLE `log_admin` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=16446 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_connection
-- ----------------------------
DROP TABLE IF EXISTS `log_connection`;
CREATE TABLE `log_connection` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=68726 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_cop
-- ----------------------------
DROP TABLE IF EXISTS `log_cop`;
CREATE TABLE `log_cop` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=45459 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_craft
-- ----------------------------
DROP TABLE IF EXISTS `log_craft`;
CREATE TABLE `log_craft` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `classname` varchar(255) NOT NULL,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=10434 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_death
-- ----------------------------
DROP TABLE IF EXISTS `log_death`;
CREATE TABLE `log_death` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `weapon` varchar(100) NOT NULL,
  `distance` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=12149 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_economy
-- ----------------------------
DROP TABLE IF EXISTS `log_economy`;
CREATE TABLE `log_economy` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `price` varchar(100) NOT NULL,
  `item` varchar(100) NOT NULL,
  `quantity` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=179540 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_job
-- ----------------------------
DROP TABLE IF EXISTS `log_job`;
CREATE TABLE `log_job` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=66308 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_money
-- ----------------------------
DROP TABLE IF EXISTS `log_money`;
CREATE TABLE `log_money` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `unitUID` varchar(50) NOT NULL,
  `unitName` varchar(64) NOT NULL,
  `unitCash` int(13) NOT NULL,
  `unitBank` int(13) NOT NULL,
  `unitInv` varchar(10000) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=72218 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for log_vehicle
-- ----------------------------
DROP TABLE IF EXISTS `log_vehicle`;
CREATE TABLE `log_vehicle` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `playerUID` varchar(50) NOT NULL,
  `playerName` varchar(64) NOT NULL,
  `playerCash` int(13) NOT NULL,
  `playerBank` int(13) NOT NULL,
  `playerInv` varchar(10000) NOT NULL,
  `type` varchar(20) NOT NULL,
  `text` varchar(255) NOT NULL,
  `vehicleClassname` varchar(255) NOT NULL,
  `vehicleName` varchar(255) NOT NULL,
  `amount` varchar(100) NOT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=133805 DEFAULT CHARSET=utf8;

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
-- Table structure for slpd_prison
-- ----------------------------
DROP TABLE IF EXISTS `slpd_prison`;
CREATE TABLE `slpd_prison` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `uid_player` varchar(20) NOT NULL DEFAULT '',
  `uid_officer` varchar(20) NOT NULL DEFAULT '',
  `active` int(1) NOT NULL DEFAULT '1',
  `time_prison` int(3) NOT NULL,
  `time_left` int(3) NOT NULL,
  `reason` varchar(255) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=261 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for slpd_storage
-- ----------------------------
DROP TABLE IF EXISTS `slpd_storage`;
CREATE TABLE `slpd_storage` (
  `police` varchar(5000) DEFAULT NULL,
  `ems` varchar(5000) DEFAULT NULL,
  `mafia` varchar(5000) DEFAULT NULL,
  `id` int(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for slpd_tickets
-- ----------------------------
DROP TABLE IF EXISTS `slpd_tickets`;
CREATE TABLE `slpd_tickets` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `uid_officer` varchar(20) NOT NULL,
  `uid_player` varchar(20) NOT NULL,
  `amount` int(11) NOT NULL,
  `reason` varchar(255) NOT NULL,
  `points` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=1030 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for slpd_wanted
-- ----------------------------
DROP TABLE IF EXISTS `slpd_wanted`;
CREATE TABLE `slpd_wanted` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `uid_suspect` varchar(30) NOT NULL,
  `uid_officer` varchar(32) NOT NULL,
  `charges` text NOT NULL,
  `wanted_level` tinyint(1) NOT NULL DEFAULT '0',
  `active` int(1) NOT NULL DEFAULT '1',
  `uid_closed` varchar(20) NOT NULL DEFAULT '',
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=256 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for slpd_wanted_vehicle
-- ----------------------------
DROP TABLE IF EXISTS `slpd_wanted_vehicle`;
CREATE TABLE `slpd_wanted_vehicle` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `plate` varchar(7) NOT NULL,
  `description` varchar(255) NOT NULL,
  `uid_officer` varchar(20) NOT NULL,
  `reason` text NOT NULL,
  `wanted_level` int(1) NOT NULL,
  `active` int(1) NOT NULL DEFAULT '1',
  `uid_closed` varchar(20) NOT NULL DEFAULT '',
  `date` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=28714 DEFAULT CHARSET=latin1;

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
  `mayor` enum('0','1') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `doughnuts` enum('0','1','2','3','4','5') CHARACTER SET utf8 NOT NULL DEFAULT '0',
  `connected` int(1) NOT NULL DEFAULT '0',
  `respawn` int(2) NOT NULL DEFAULT '2',
  `exp_level` int(11) NOT NULL DEFAULT '0',
  `exp_total` int(11) NOT NULL DEFAULT '0',
  `exp_perkPoints` int(11) NOT NULL DEFAULT '0',
  `exp_perks` text,
  PRIMARY KEY (`bankaccount`),
  UNIQUE KEY `uid` (`uid`)
) ENGINE=InnoDB AUTO_INCREMENT=1630 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Event structure for DeleteDestroyedVehicles
-- ----------------------------
DROP EVENT IF EXISTS `DeleteDestroyedVehicles`;
DELIMITER ;;
CREATE DEFINER=`navicat`@`localhost` EVENT `DeleteDestroyedVehicles` ON SCHEDULE EVERY 1 HOUR STARTS '2017-03-22 22:32:57' ON COMPLETION NOT PRESERVE ENABLE DO DELETE FROM garage WHERE damage > 0.9
;;
DELIMITER ;
