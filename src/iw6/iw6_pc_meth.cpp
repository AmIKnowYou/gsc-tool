// Copyright 2023 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "iw6_pc.hpp"

namespace xsk::gsc::iw6_pc
{

extern std::array<std::pair<u16, char const*>, meth_count> const meth_list
{{
    { 0x8000, "thermaldrawdisable" },
    { 0x8001, "setturretdismountorg" },
    { 0x8002, "setdamagestage" },
    { 0x8003, "playsoundtoteam" },
    { 0x8004, "playsoundtoplayer" },
    { 0x8005, "playerhide" },
    { 0x8006, "showtoplayer" },
    { 0x8007, "enableplayeruse" },
    { 0x8008, "disableplayeruse" },
    { 0x8009, "makescrambler" },
    { 0x800A, "makeportableradar" },
    { 0x800B, "clearscrambler" },
    { 0x800C, "clearportableradar" },
    { 0x800D, "placespawnpoint" },
    { 0x800E, "setteamfortrigger" },
    { 0x800F, "clientclaimtrigger" },
    { 0x8010, "clientreleasetrigger" },
    { 0x8011, "releaseclaimedtrigger" },
    { 0x8012, "isusingonlinedataoffline" },
    { 0x8013, "getrestedtime" },
    { 0x8014, "sendleaderboards" },
    { 0x8015, "isonladder" },
    { 0x8016, "getcorpseanim" },
    { 0x8017, "playerforcedeathanim" },
    { 0x8018, "attach" },
    { 0x8019, "attachshieldmodel" },
    { 0x801A, "getlightfovinner" },
    { 0x801B, "getlightfovouter" },
    { 0x801C, "setlightfovrange" },
    { 0x801D, "getlightexponent" },
    { 0x801E, "setlightexponent" },
    { 0x801F, "startragdoll" },
    { 0x8020, "startragdollfromimpact" },
    { 0x8021, "queryshouldearlyragdoll" },
    { 0x8022, "logstring" },
    { 0x8023, "laserhidefromclient" },
    { 0x8024, "stopsoundchannel" },
    { 0x8025, "thermaldrawenable" },
    { 0x8026, "detach" },
    { 0x8027, "detachshieldmodel" },
    { 0x8028, "moveshieldmodel" },
    { 0x8029, "detachall" },
    { 0x802A, "getattachsize" },
    { 0x802B, "getattachmodelname" },
    { 0x802C, "getattachtagname" },
    { 0x802D, "setturretcanaidetach" },
    { 0x802E, "setturretfov" },
    { 0x802F, "lerpfov" },
    { 0x8030, "getvalidcoverpeekouts" },
    { 0x8031, "gethighestnodestance" },
    { 0x8032, "doesnodeallowstance" },
    { 0x8033, "getgunangles" },
    { 0x8034, "magicgrenade" },
    { 0x8035, "magicgrenademanual" },
    { 0x8036, "getentnum" },
    { 0x8037, "launch" },
    { 0x8038, "setsoundblend" },
    { 0x8039, "makefakeai" },
    { 0x803A, "spawndrone" },
    { 0x803B, "setcorpseremovetimer" },
    { 0x803C, "setlookattext" },
    { 0x803D, "setspawnerteam" },
    { 0x803E, "addaieventlistener" },
    { 0x803F, "removeaieventlistener" },
    { 0x8040, "getlightcolor" },
    { 0x8041, "setlightcolor" },
    { 0x8042, "getlightradius" },
    { 0x8043, "setlightradius" },
    { 0x8044, "getattachignorecollision" },
    { 0x8045, "hidepart" },
    { 0x8046, "hidepart_allinstances" },
    { 0x8047, "hideallparts" },
    { 0x8048, "showpart" },
    { 0x8049, "showallparts" },
    { 0x804A, "linkto" },
    { 0x804B, "linktoblendtotag" },
    { 0x804C, "unlink" },
    { 0x804D, "setnormalhealth" },
    { 0x804E, "dodamage" },
    { 0x804F, "kill" },
    { 0x8050, "show" },
    { 0x8051, "hide" },
    { 0x8052, "showonclient" },
    { 0x8053, "hideonclient" },
    { 0x8054, "laserforceon" },
    { 0x8055, "laserforceoff" },
    { 0x8056, "disconnectpaths" },
    { 0x8057, "connectpaths" },
    { 0x8058, "disconnectnode" },
    { 0x8059, "connectnode" },
    { 0x805A, "startusingheroonlylighting" },
    { 0x805B, "stopusingheroonlylighting" },
    { 0x805C, "startusinglessfrequentlighting" },
    { 0x805D, "stopusinglessfrequentlighting" },
    { 0x805E, "setmovingplatformplayerturnrate" },
    { 0x805F, "setthermalfog" },
    { 0x8060, "setnightvisionfog" },
    { 0x8061, "clearthermalfog" },
    { 0x8062, "clearnightvisionfog" },
    { 0x8063, "digitaldistortsetparams" },
    { 0x8064, "setmode" },
    { 0x8065, "getmode" },
    { 0x8066, "setturretignoregoals" },
    { 0x8067, "islinked" },
    { 0x8068, "enablelinkto" },
    { 0x8069, "playsoundatviewheight" },
    { 0x806A, "prefetchsound" },
    { 0x806B, "setpitch" },
    { 0x806C, "scalepitch" },
    { 0x806D, "setvolume" },
    { 0x806E, "scalevolume" },
    { 0x806F, "setspeakermapmonotostereo" },
    { 0x8070, "setspeakermapmonoto51" },
    { 0x8071, "setdistributed2dsound" },
    { 0x8072, "playsoundasmaster" },
    { 0x8073, "playloopsound" },
    { 0x8074, "eqon" },
    { 0x8075, "eqoff" },
    { 0x8076, "haseq" },
    { 0x8077, "iswaitingonsound" },
    { 0x8078, "getnormalhealth" },
    { 0x8079, "playerlinkto" },
    { 0x807A, "playerlinktodelta" },
    { 0x807B, "playerlinkweaponviewtodelta" },
    { 0x807C, "playerlinktoabsolute" },
    { 0x807D, "playerlinktoblend" },
    { 0x807E, "playerlinkedoffsetenable" },
    { 0x807F, "setwaypointedgestyle_secondaryarrow" },
    { 0x8080, "setwaypointiconoffscreenonly" },
    { 0x8081, "fadeovertime" },
    { 0x8082, "scaleovertime" },
    { 0x8083, "moveovertime" },
    { 0x8084, "reset" },
    { 0x8085, "destroy" },
    { 0x8086, "setpulsefx" },
    { 0x8087, "setplayernamestring" },
    { 0x8088, "changefontscaleovertime" },
    { 0x8089, "startignoringspotlight" },
    { 0x808A, "stopignoringspotlight" },
    { 0x808B, "dontcastshadows" },
    { 0x808C, "castshadows" },
    { 0x808D, "setstablemissile" },
    { 0x808E, "playersetgroundreferenceent" },
    { 0x808F, "dontinterpolate" },
    { 0x8090, "dospawn" },
    { 0x8091, "stalingradspawn" },
    { 0x8092, "getorigin" },
    { 0x8093, "getcentroid" },
    { 0x8094, "getshootatpos" },
    { 0x8095, "getdebugeye" },
    { 0x8096, "useby" },
    { 0x8097, "playsound" },
    { 0x8098, "playerlinkedoffsetdisable" },
    { 0x8099, "playerlinkedsetviewznear" },
    { 0x809A, "playerlinkedsetusebaseangleforviewclamp" },
    { 0x809B, "lerpviewangleclamp" },
    { 0x809C, "setviewangleresistance" },
    { 0x809D, "springcamenabled" },
    { 0x809E, "springcamdisabled" },
    { 0x809F, "linktoplayerview" },
    { 0x80A0, "unlinkfromplayerview" },
    { 0x80A1, "geteye" },
    { 0x80A2, "istouching" },
    { 0x80A3, "getistouchingentities" },
    { 0x80A4, "stoploopsound" },
    { 0x80A5, "stopsounds" },
    { 0x80A6, "playrumbleonentity" },
    { 0x80A7, "playrumblelooponentity" },
    { 0x80A8, "stoprumble" },
    { 0x80A9, "delete" },
    { 0x80AA, "setmodel" },
    { 0x80AB, "laseron" },
    { 0x80AC, "laseroff" },
    { 0x80AD, "laseraltviewon" },
    { 0x80AE, "laseraltviewoff" },
    { 0x80AF, "thermalvisionon" },
    { 0x80B0, "thermalvisiononshadowoff" },
    { 0x80B1, "thermalvisionoff" },
    { 0x80B2, "thermalvisionfofoverlayon" },
    { 0x80B3, "thermalvisionfofoverlayoff" },
    { 0x80B4, "autospotoverlayon" },
    { 0x80B5, "autospotoverlayoff" },
    { 0x80B6, "seteyesonuplinkenabled" },
    { 0x80B7, "setcontents" },
    { 0x80B8, "makeusable" },
    { 0x80B9, "makeunusable" },
    { 0x80BA, "setwhizbyprobabilities" },
    { 0x80BB, "visionsetnakedforplayer_lerp" },
    { 0x80BC, "setwaitnode" },
    { 0x80BD, "returnplayercontrol" },
    { 0x80BE, "vehphys_starttrack" },
    { 0x80BF, "vehphys_clearautodisable" },
    { 0x80C0, "vehicleusealtblendedaudio" },
    { 0x80C1, "settext" },
    { 0x80C2, "clearalltextafterhudelem" },
    { 0x80C3, "setshader" },
    { 0x80C4, "settargetent" },
    { 0x80C5, "cleartargetent" },
    { 0x80C6, "settimer" },
    { 0x80C7, "settimerup" },
    { 0x80C8, "settimerstatic" },
    { 0x80C9, "settenthstimer" },
    { 0x80CA, "settenthstimerup" },
    { 0x80CB, "settenthstimerstatic" },
    { 0x80CC, "setclock" },
    { 0x80CD, "setclockup" },
    { 0x80CE, "setvalue" },
    { 0x80CF, "setwaypoint" },
    { 0x80D0, "setwaypointedgestyle_rotatingicon" },
    { 0x80D1, "setcursorhint" },
    { 0x80D2, "sethintstring" },
    { 0x80D3, "forceusehinton" },
    { 0x80D4, "forceusehintoff" },
    { 0x80D5, "makesoft" },
    { 0x80D6, "makehard" },
    { 0x80D7, "willneverchange" },
    { 0x80D8, "startfiring" },
    { 0x80D9, "stopfiring" },
    { 0x80DA, "isfiringturret" },
    { 0x80DB, "startbarrelspin" },
    { 0x80DC, "stopbarrelspin" },
    { 0x80DD, "getbarrelspinrate" },
    { 0x80DE, "remotecontrolturret" },
    { 0x80DF, "remotecontrolturretoff" },
    { 0x80E0, "shootturret" },
    { 0x80E1, "getturretowner" },
    { 0x80E2, "enabledeathshield" },
    { 0x80E3, "nightvisiongogglesforceon" },
    { 0x80E4, "nightvisiongogglesforceoff" },
    { 0x80E5, "enableinvulnerability" },
    { 0x80E6, "disableinvulnerability" },
    { 0x80E7, "enablebreaching" },
    { 0x80E8, "disablebreaching" },
    { 0x80E9, "forceviewmodelanimation" },
    { 0x80EA, "disableturretdismount" },
    { 0x80EB, "enableturretdismount" },
    { 0x80EC, "uploadscore" },
    { 0x80ED, "uploadtime" },
    { 0x80EE, "uploadleaderboards" },
    { 0x80EF, "giveachievement" },
    { 0x80F0, "hidehud" },
    { 0x80F1, "showhud" },
    { 0x80F2, "mountvehicle" },
    { 0x80F3, "dismountvehicle" },
    { 0x80F4, "enableslowaim" },
    { 0x80F5, "disableslowaim" },
    { 0x80F6, "usehintsinvehicle" },
    { 0x80F7, "vehicleattackbuttonpressed" },
    { 0x80F8, "setwhizbyoffset" },
    { 0x80F9, "setsentryowner" },
    { 0x80FA, "setsentrycarrier" },
    { 0x80FB, "setturretminimapvisible" },
    { 0x80FC, "settargetentity" },
    { 0x80FD, "snaptotargetentity" },
    { 0x80FE, "cleartargetentity" },
    { 0x80FF, "getturrettarget" },
    { 0x8100, "setplayerspread" },
    { 0x8101, "setaispread" },
    { 0x8102, "setsuppressiontime" },
    { 0x8103, "setflaggedanimknobrestart" },
    { 0x8104, "setflaggedanimknoblimitedrestart" },
    { 0x8105, "setflaggedanimknoball" },
    { 0x8106, "setflaggedanimknoballrestart" },
    { 0x8107, "setflaggedanim" },
    { 0x8108, "setflaggedanimlimited" },
    { 0x8109, "setflaggedanimrestart" },
    { 0x810A, "setflaggedanimlimitedrestart" },
    { 0x810B, "useanimtree" },
    { 0x810C, "stopuseanimtree" },
    { 0x810D, "setanimtime" },
    { 0x810E, "showviewmodel" },
    { 0x810F, "hideviewmodel" },
    { 0x8110, "allowstand" },
    { 0x8111, "allowcrouch" },
    { 0x8112, "allowprone" },
    { 0x8113, "allowlean" },
    { 0x8114, "allowswim" },
    { 0x8115, "setocclusion" },
    { 0x8116, "setocclusionfromtable" },
    { 0x8117, "deactivateocclusion" },
    { 0x8118, "deactivateallocclusion" },
    { 0x8119, "isocclusionenabled" },
    { 0x811A, "setreverbfromtable" },
    { 0x811B, "setvolmodfromtable" },
    { 0x811C, "settimescalefactorfromtable" },
    { 0x811D, "setwhizbyfromtable" },
    { 0x811E, "seteqfromtable" },
    { 0x811F, "iseqenabled" },
    { 0x8120, "seteq" },
    { 0x8121, "seteqbands" },
    { 0x8122, "deactivateeq" },
    { 0x8123, "seteqlerp" },
    { 0x8124, "islookingat" },
    { 0x8125, "isthrowinggrenade" },
    { 0x8126, "isfiring" },
    { 0x8127, "ismeleeing" },
    { 0x8128, "setautopickup" },
    { 0x8129, "allowmelee" },
    { 0x812A, "allowfire" },
    { 0x812B, "enablehealthshield" },
    { 0x812C, "setconvergencetime" },
    { 0x812D, "setconvergenceheightpercent" },
    { 0x812E, "setturretteam" },
    { 0x812F, "maketurretsolid" },
    { 0x8130, "maketurretoperable" },
    { 0x8131, "maketurretinoperable" },
    { 0x8132, "makeentitysentient" },
    { 0x8133, "freeentitysentient" },
    { 0x8134, "isindoor" },
    { 0x8135, "getdroptofloorposition" },
    { 0x8136, "isbadguy" },
    { 0x8137, "animscripted" },
    { 0x8138, "animscriptedthirdperson" },
    { 0x8139, "animrelative" },
    { 0x813A, "stopanimscripted" },
    { 0x813B, "clearanim" },
    { 0x813C, "setanimknob" },
    { 0x813D, "setanimknoblimited" },
    { 0x813E, "setanimknobrestart" },
    { 0x813F, "setanimknoblimitedrestart" },
    { 0x8140, "setanimknoball" },
    { 0x8141, "setanimknoballlimited" },
    { 0x8142, "setanimknoballrestart" },
    { 0x8143, "setanimknoballlimitedrestart" },
    { 0x8144, "setanim" },
    { 0x8145, "setanimlimited" },
    { 0x8146, "setanimrestart" },
    { 0x8147, "setanimlimitedrestart" },
    { 0x8148, "getanimtime" },
    { 0x8149, "getanimweight" },
    { 0x814A, "getanimassettype" },
    { 0x814B, "setflaggedanimknob" },
    { 0x814C, "setflaggedanimknoblimited" },
    { 0x814D, "setturretaccuracy" },
    { 0x814E, "setrightarc" },
    { 0x814F, "setleftarc" },
    { 0x8150, "settoparc" },
    { 0x8151, "setbottomarc" },
    { 0x8152, "setautorotationdelay" },
    { 0x8153, "setdefaultdroppitch" },
    { 0x8154, "restoredefaultdroppitch" },
    { 0x8155, "turretfiredisable" },
    { 0x8156, "getfixednodesafevolume" },
    { 0x8157, "clearfixednodesafevolume" },
    { 0x8158, "isingoal" },
    { 0x8159, "setruntopos" },
    { 0x815A, "nearnode" },
    { 0x815B, "nearclaimnode" },
    { 0x815C, "nearclaimnodeandangle" },
    { 0x815D, "atdangerousnode" },
    { 0x815E, "getenemyinfo" },
    { 0x815F, "clearenemy" },
    { 0x8160, "setentitytarget" },
    { 0x8161, "clearentitytarget" },
    { 0x8162, "setpotentialthreat" },
    { 0x8163, "clearpotentialthreat" },
    { 0x8164, "setflashbanged" },
    { 0x8165, "setengagementmindist" },
    { 0x8166, "setengagementmaxdist" },
    { 0x8167, "isknownenemyinradius" },
    { 0x8168, "isknownenemyinvolume" },
    { 0x8169, "settalktospecies" },
    { 0x816A, "laseralton" },
    { 0x816B, "laseraltoff" },
    { 0x816C, "invisiblenotsolid" },
    { 0x816D, "visiblesolid" },
    { 0x816E, "setdefaultaimlimits" },
    { 0x816F, "initriotshieldhealth" },
    { 0x8170, "getenemysqdist" },
    { 0x8171, "getclosestenemysqdist" },
    { 0x8172, "setthreatbiasgroup" },
    { 0x8173, "getthreatbiasgroup" },
    { 0x8174, "turretfireenable" },
    { 0x8175, "setturretmodechangewait" },
    { 0x8176, "usetriggerrequirelookat" },
    { 0x8177, "getstance" },
    { 0x8178, "setstance" },
    { 0x8179, "itemweaponsetammo" },
    { 0x817A, "getammocount" },
    { 0x817B, "gettagorigin" },
    { 0x817C, "gettagangles" },
    { 0x817D, "shellshock" },
    { 0x817E, "stunplayer" },
    { 0x817F, "stopshellshock" },
    { 0x8180, "fadeoutshellshock" },
    { 0x8181, "setdepthoffield" },
    { 0x8182, "setviewmodeldepthoffield" },
    { 0x8183, "setmotionblurmovescale" },
    { 0x8184, "pickupgrenade" },
    { 0x8185, "useturret" },
    { 0x8186, "stopuseturret" },
    { 0x8187, "canuseturret" },
    { 0x8188, "traversemode" },
    { 0x8189, "animmode" },
    { 0x818A, "orientmode" },
    { 0x818B, "getmotionangle" },
    { 0x818C, "shouldfacemotion" },
    { 0x818D, "getanglestolikelyenemypath" },
    { 0x818E, "setturretanim" },
    { 0x818F, "getturret" },
    { 0x8190, "getgroundenttype" },
    { 0x8191, "forcestartnegotiation" },
    { 0x8192, "setalienjumpcostscale" },
    { 0x8193, "setalienruncostscale" },
    { 0x8194, "setalientraversecostscale" },
    { 0x8195, "animcustom" },
    { 0x8196, "isinscriptedstate" },
    { 0x8197, "canattackenemynode" },
    { 0x8198, "getnegotiationstartnode" },
    { 0x8199, "getnegotiationendnode" },
    { 0x819A, "getnegotiationnextnode" },
    { 0x819B, "getdoorpathnode" },
    { 0x819C, "comparenodedirtopathdir" },
    { 0x819D, "checkprone" },
    { 0x819E, "pushplayer" },
    { 0x819F, "checkgrenadethrowpos" },
    { 0x81A0, "setgoalnode" },
    { 0x81A1, "setgoalpos" },
    { 0x81A2, "setgoalentity" },
    { 0x81A3, "setgoalvolume" },
    { 0x81A4, "setgoalvolumeauto" },
    { 0x81A5, "getgoalvolume" },
    { 0x81A6, "cleargoalvolume" },
    { 0x81A7, "setfixednodesafevolume" },
    { 0x81A8, "setmotionblurturnscale" },
    { 0x81A9, "setmotionblurzoomscale" },
    { 0x81AA, "viewkick" },
    { 0x81AB, "localtoworldcoords" },
    { 0x81AC, "getentitynumber" },
    { 0x81AD, "getentityvelocity" },
    { 0x81AE, "enablegrenadetouchdamage" },
    { 0x81AF, "disablegrenadetouchdamage" },
    { 0x81B0, "enableaimassist" },
    { 0x81B1, "setlookatyawlimits" },
    { 0x81B2, "stoplookat" },
    { 0x81B3, "getmuzzlepos" },
    { 0x81B4, "getmuzzleangle" },
    { 0x81B5, "getmuzzlesideoffsetpos" },
    { 0x81B6, "getaimangle" },
    { 0x81B7, "canshoot" },
    { 0x81B8, "canshootenemy" },
    { 0x81B9, "cansee" },
    { 0x81BA, "seerecently" },
    { 0x81BB, "lastknowntime" },
    { 0x81BC, "lastknownpos" },
    { 0x81BD, "dropweapon" },
    { 0x81BE, "maymovetopoint" },
    { 0x81BF, "maymovefrompointtopoint" },
    { 0x81C0, "teleport" },
    { 0x81C1, "forceteleport" },
    { 0x81C2, "safeteleport" },
    { 0x81C3, "withinapproxpathdist" },
    { 0x81C4, "ispathdirect" },
    { 0x81C5, "allowedstances" },
    { 0x81C6, "isstanceallowed" },
    { 0x81C7, "issuppressionwaiting" },
    { 0x81C8, "issuppressed" },
    { 0x81C9, "ismovesuppressed" },
    { 0x81CA, "isgrenadepossafe" },
    { 0x81CB, "checkgrenadethrow" },
    { 0x81CC, "checkgrenadelaunch" },
    { 0x81CD, "checkgrenadelaunchpos" },
    { 0x81CE, "throwgrenade" },
    { 0x81CF, "disableaimassist" },
    { 0x81D0, "radiusdamage" },
    { 0x81D1, "detonate" },
    { 0x81D2, "damageconetrace" },
    { 0x81D3, "sightconetrace" },
    { 0x81D4, "missile_settargetent" },
    { 0x81D5, "missile_settargetpos" },
    { 0x81D6, "missile_cleartarget" },
    { 0x81D7, "missile_setflightmodedirect" },
    { 0x81D8, "missile_setflightmodetop" },
    { 0x81D9, "getlightintensity" },
    { 0x81DA, "setlightintensity" },
    { 0x81DB, "isragdoll" },
    { 0x81DC, "setmovespeedscale" },
    { 0x81DD, "cameralinkto" },
    { 0x81DE, "cameraunlink" },
    { 0x81DF, "startcoverarrival" },
    { 0x81E0, "starttraversearrival" },
    { 0x81E1, "checkcoverexitposwithpath" },
    { 0x81E2, "shoot" },
    { 0x81E3, "shootblank" },
    { 0x81E4, "melee" },
    { 0x81E5, "updateplayersightaccuracy" },
    { 0x81E6, "findshufflecovernode" },
    { 0x81E7, "findnearbycovernode" },
    { 0x81E8, "findcovernode" },
    { 0x81E9, "findbestcovernode" },
    { 0x81EA, "getcovernode" },
    { 0x81EB, "usecovernode" },
    { 0x81EC, "iscovervalidagainstenemy" },
    { 0x81ED, "reacquirestep" },
    { 0x81EE, "findreacquiredirectpath" },
    { 0x81EF, "trimpathtoattack" },
    { 0x81F0, "reacquiremove" },
    { 0x81F1, "findreacquireproximatepath" },
    { 0x81F2, "flagenemyunattackable" },
    { 0x81F3, "enterprone" },
    { 0x81F4, "exitprone" },
    { 0x81F5, "setproneanimnodes" },
    { 0x81F6, "updateprone" },
    { 0x81F7, "clearpitchorient" },
    { 0x81F8, "setlookatanimnodes" },
    { 0x81F9, "setlookat" },
    { 0x81FA, "setlookatentity" },
    { 0x81FB, "controlslinkto" },
    { 0x81FC, "controlsunlink" },
    { 0x81FD, "makevehiclesolidcapsule" },
    { 0x81FE, "teleportentityrelative" },
    { 0x81FF, "makevehiclesolidsphere" },
    { 0x8200, "makevehiclesolid" },
    { 0x8201, "remotecontrolvehicle" },
    { 0x8202, "remotecontrolvehicleoff" },
    { 0x8203, "isfiringvehicleturret" },
    { 0x8204, "remotecontrolvehicletarget" },
    { 0x8205, "remotecontrolvehicletargetoff" },
    { 0x8206, "drivevehicleandcontrolturret" },
    { 0x8207, "drivevehicleandcontrolturretoff" },
    { 0x8208, "getplayersetting" },
    { 0x8209, "getlocalplayerprofiledata" },
    { 0x820A, "setlocalplayerprofiledata" },
    { 0x820B, "remotecamerasoundscapeon" },
    { 0x820C, "remotecamerasoundscapeoff" },
    { 0x820D, "setmotiontrackervisible" },
    { 0x820E, "getmotiontrackervisible" },
    { 0x820F, "worldpointinreticle_circle" },
    { 0x8210, "worldpointinreticle_rect" },
    { 0x8211, "getpointinbounds" },
    { 0x8212, "transfermarkstonewscriptmodel" },
    { 0x8213, "setwatersheeting" },
    { 0x8214, "addontoviewmodel" },
    { 0x8215, "clearviewmodeladdons" },
    { 0x8216, "setweaponhudiconoverride" },
    { 0x8217, "getweaponhudiconoverride" },
    { 0x8218, "setempjammed" },
    { 0x8219, "playersetexpfog" },
    { 0x821A, "isitemunlocked" },
    { 0x821B, "getplayerdata" },
    { 0x821C, "getrankedplayerdata" },
    { 0x821D, "getprivateplayerdata" },
    { 0x821E, "getcoopplayerdata" },
    { 0x821F, "getcommonplayerdata" },
    { 0x8220, "vehicleturretcontroloff" },
    { 0x8221, "isturretready" },
    { 0x8222, "vehicledriveto" },
    { 0x8223, "vehicle_dospawn" },
    { 0x8224, "vehicle_isphysveh" },
    { 0x8225, "vehphys_crash" },
    { 0x8226, "vehphys_launch" },
    { 0x8227, "vehphys_disablecrashing" },
    { 0x8228, "vehphys_enablecrashing" },
    { 0x8229, "vehphys_setspeed" },
    { 0x822A, "vehphys_setconveyorbelt" },
    { 0x822B, "freehelicopter" },
    { 0x822C, "playerlinkedturretanglesenable" },
    { 0x822D, "playerlinkedturretanglesdisable" },
    { 0x822E, "playersetstreamorigin" },
    { 0x822F, "playerclearstreamorigin" },
    { 0x8230, "nightvisionviewon" },
    { 0x8231, "nightvisionviewoff" },
    { 0x8232, "painvisionon" },
    { 0x8233, "painvisionoff" },
    { 0x8234, "getplayerintelisfound" },
    { 0x8235, "setplayerintelfound" },
    { 0x8236, "newpip" },
    { 0x8237, "sethuddynlight" },
    { 0x8238, "startscriptedanim" },
    { 0x8239, "startcoverbehavior" },
    { 0x823A, "setplayerdata" },
    { 0x823B, "setrankedplayerdata" },
    { 0x823C, "setprivateplayerdata" },
    { 0x823D, "setcoopplayerdata" },
    { 0x823E, "setcommonplayerdata" },
    { 0x823F, "getcacplayerdata" },
    { 0x8240, "trackerupdate" },
    { 0x8241, "pingplayer" },
    { 0x8242, "buttonpressed" },
    { 0x8243, "sayall" },
    { 0x8244, "sayteam" },
    { 0x8245, "setspawnweapon" },
    { 0x8246, "dropitem" },
    { 0x8247, "dropscavengerbag" },
    { 0x8248, "setjitterparams" },
    { 0x8249, "sethoverparams" },
    { 0x824A, "joltbody" },
    { 0x824B, "freevehicle" },
    { 0x824C, "getwheelsurface" },
    { 0x824D, "getvehicleowner" },
    { 0x824E, "setvehiclelookattext" },
    { 0x824F, "setvehicleteam" },
    { 0x8250, "setneargoalnotifydist" },
    { 0x8251, "setvehgoalpos" },
    { 0x8252, "setgoalyaw" },
    { 0x8253, "cleargoalyaw" },
    { 0x8254, "settargetyaw" },
    { 0x8255, "cleartargetyaw" },
    { 0x8256, "vehicle_helisetai" },
    { 0x8257, "setturrettargetvec" },
    { 0x8258, "setturrettargetent" },
    { 0x8259, "clearturrettarget" },
    { 0x825A, "vehicle_canturrettargetpoint" },
    { 0x825B, "setlookatent" },
    { 0x825C, "clearlookatent" },
    { 0x825D, "setvehweapon" },
    { 0x825E, "fireweapon" },
    { 0x825F, "vehicleturretcontrolon" },
    { 0x8260, "finishplayerdamage" },
    { 0x8261, "suicide" },
    { 0x8262, "closeingamemenu" },
    { 0x8263, "iprintln" },
    { 0x8264, "iprintlnbold" },
    { 0x8265, "spawn" },
    { 0x8266, "setentertime" },
    { 0x8267, "cloneplayer" },
    { 0x8268, "istalking" },
    { 0x8269, "allowspectateteam" },
    { 0x826A, "getguid" },
    { 0x826B, "physicslaunchserver" },
    { 0x826C, "physicslaunchserveritem" },
    { 0x826D, "clonebrushmodeltoscriptmodel" },
    { 0x826E, "scriptmodelplayanim" },
    { 0x826F, "scriptmodelclearanim" },
    { 0x8270, "scriptmodelplayanimdeltamotion" },
    { 0x8271, "vehicle_teleport" },
    { 0x8272, "attachpath" },
    { 0x8273, "getattachpos" },
    { 0x8274, "startpath" },
    { 0x8275, "setswitchnode" },
    { 0x8276, "setwaitspeed" },
    { 0x8277, "vehicle_finishdamage" },
    { 0x8278, "vehicle_setspeed" },
    { 0x8279, "vehicle_setspeedimmediate" },
    { 0x827A, "vehicle_rotateyaw" },
    { 0x827B, "vehicle_getspeed" },
    { 0x827C, "vehicle_getvelocity" },
    { 0x827D, "vehicle_getbodyvelocity" },
    { 0x827E, "vehicle_getsteering" },
    { 0x827F, "vehicle_getthrottle" },
    { 0x8280, "vehicle_turnengineoff" },
    { 0x8281, "vehicle_turnengineon" },
    { 0x8282, "vehicle_orientto" },
    { 0x8283, "getgoalspeedmph" },
    { 0x8284, "setacceleration" },
    { 0x8285, "setdeceleration" },
    { 0x8286, "resumespeed" },
    { 0x8287, "setyawspeed" },
    { 0x8288, "setyawspeedbyname" },
    { 0x8289, "setmaxpitchroll" },
    { 0x828A, "setairresistance" },
    { 0x828B, "setturningability" },
    { 0x828C, "getxuid" },
    { 0x828D, "getucdidhigh" },
    { 0x828E, "getucdidlow" },
    { 0x828F, "getclanidhigh" },
    { 0x8290, "getclanidlow" },
    { 0x8291, "ishost" },
    { 0x8292, "getspectatingplayer" },
    { 0x8293, "predictstreampos" },
    { 0x8294, "updatescores" },
    { 0x8295, "updatedmscores" },
    { 0x8296, "setrank" },
    { 0x8297, "setcardtitle" },
    { 0x8298, "weaponlocknoclearance" },
    { 0x8299, "visionsyncwithplayer" },
    { 0x829A, "showhudsplash" },
    { 0x829B, "setperk" },
    { 0x829C, "hasperk" },
    { 0x829D, "clearperks" },
    { 0x829E, "unsetperk" },
    { 0x829F, "registerparty" },
    { 0x82A0, "getfireteammembers" },
    { 0x82A1, "noclip" },
    { 0x82A2, "ufo" },
    { 0x82A3, "moveto" },
    { 0x82A4, "movex" },
    { 0x82A5, "movey" },
    { 0x82A6, "movez" },
    { 0x82A7, "movegravity" },
    { 0x82A8, "moveslide" },
    { 0x82A9, "stopmoveslide" },
    { 0x82AA, "rotateto" },
    { 0x82AB, "rotatepitch" },
    { 0x82AC, "rotateyaw" },
    { 0x82AD, "rotateroll" },
    { 0x82AE, "addpitch" },
    { 0x82AF, "addyaw" },
    { 0x82B0, "addroll" },
    { 0x82B1, "vibrate" },
    { 0x82B2, "rotatevelocity" },
    { 0x82B3, "solid" },
    { 0x82B4, "notsolid" },
    { 0x82B5, "setcandamage" },
    { 0x82B6, "setcanradiusdamage" },
    { 0x82B7, "physicslaunchclient" },
    { 0x82B8, "setcardicon" },
    { 0x82B9, "setcardnameplate" },
    { 0x82BA, "setcarddisplayslot" },
    { 0x82BB, "kc_regweaponforfxremoval" },
    { 0x82BC, "laststandrevive" },
    { 0x82BD, "setspectatedefaults" },
    { 0x82BE, "getthirdpersoncrosshairoffset" },
    { 0x82BF, "disableweaponpickup" },
    { 0x82C0, "enableweaponpickup" },
    { 0x82C1, "issplitscreenplayer" },
    { 0x82C2, "getweaponslistoffhands" },
    { 0x82C3, "getweaponslistitems" },
    { 0x82C4, "getweaponslistexclusives" },
    { 0x82C5, "getweaponslist" },
    { 0x82C6, "canplayerplacesentry" },
    { 0x82C7, "canplayerplacetank" },
    { 0x82C8, "visionsetnakedforplayer" },
    { 0x82C9, "visionsetnightforplayer" },
    { 0x82CA, "visionsetmissilecamforplayer" },
    { 0x82CB, "visionsetthermalforplayer" },
    { 0x82CC, "visionsetpainforplayer" },
    { 0x82CD, "setblurforplayer" },
    { 0x82CE, "getplayerweaponmodel" },
    { 0x82CF, "getplayerknifemodel" },
    { 0x82D0, "updateentitywithweapons" },
    { 0x82D1, "notifyonplayercommand" },
    { 0x82D2, "canmantle" },
    { 0x82D3, "forcemantle" },
    { 0x82D4, "ismantling" },
    { 0x82D5, "playfx" },
    { 0x82D6, "player_recoilscaleon" },
    { 0x82D7, "player_recoilscaleoff" },
    { 0x82D8, "weaponlockstart" },
    { 0x82D9, "weaponlockfinalize" },
    { 0x82DA, "weaponlockfree" },
    { 0x82DB, "weaponlocktargettooclose" },
    { 0x82DC, "issplitscreenplayerprimary" },
    { 0x82DD, "markforeyeson" },
    { 0x82DE, "issighted" },
    { 0x82DF, "getsightedplayers" },
    { 0x82E0, "getplayerssightingme" },
    { 0x82E1, "getviewmodel" },
    { 0x82E2, "fragbuttonpressed" },
    { 0x82E3, "secondaryoffhandbuttonpressed" },
    { 0x82E4, "getcurrentweaponclipammo" },
    { 0x82E5, "setvelocity" },
    { 0x82E6, "getplayerviewheight" },
    { 0x82E7, "getnormalizedmovement" },
    { 0x82E8, "setchannelvolumes" },
    { 0x82E9, "deactivatechannelvolumes" },
    { 0x82EA, "playlocalsound" },
    { 0x82EB, "stoplocalsound" },
    { 0x82EC, "setweaponammoclip" },
    { 0x82ED, "setweaponammostock" },
    { 0x82EE, "getweaponammoclip" },
    { 0x82EF, "getweaponammostock" },
    { 0x82F0, "anyammoforweaponmodes" },
    { 0x82F1, "setclientomnvar" },
    { 0x82F2, "setclientdvar" },
    { 0x82F3, "setclientdvars" },
    { 0x82F4, "setclientspawnsighttraces" },
    { 0x82F5, "clientspawnsighttracepassed" },
    { 0x82F6, "allowads" },
    { 0x82F7, "allowjump" },
    { 0x82F8, "allowsprint" },
    { 0x82F9, "setspreadoverride" },
    { 0x82FA, "resetspreadoverride" },
    { 0x82FB, "setaimspreadmovementscale" },
    { 0x82FC, "setactionslot" },
    { 0x82FD, "setviewkickscale" },
    { 0x82FE, "getviewkickscale" },
    { 0x82FF, "getweaponslistall" },
    { 0x8300, "getweaponslistprimaries" },
    { 0x8301, "getnormalizedcameramovement" },
    { 0x8302, "giveweapon" },
    { 0x8303, "takeweapon" },
    { 0x8304, "takeallweapons" },
    { 0x8305, "getcurrentweapon" },
    { 0x8306, "getcurrentprimaryweapon" },
    { 0x8307, "getcurrentoffhand" },
    { 0x8308, "hasweapon" },
    { 0x8309, "switchtoweapon" },
    { 0x830A, "switchtoweaponimmediate" },
    { 0x830B, "switchtooffhand" },
    { 0x830C, "setoffhandsecondaryclass" },
    { 0x830D, "getoffhandsecondaryclass" },
    { 0x830E, "beginlocationselection" },
    { 0x830F, "endlocationselection" },
    { 0x8310, "disableweapons" },
    { 0x8311, "enableweapons" },
    { 0x8312, "disableoffhandweapons" },
    { 0x8313, "enableoffhandweapons" },
    { 0x8314, "disableweaponswitch" },
    { 0x8315, "enableweaponswitch" },
    { 0x8316, "openpopupmenu" },
    { 0x8317, "openpopupmenunomouse" },
    { 0x8318, "closepopupmenu" },
    { 0x8319, "openmenu" },
    { 0x831A, "closemenu" },
    { 0x831B, "savematchrulestohistory" },
    { 0x831C, "freezecontrols" },
    { 0x831D, "disableusability" },
    { 0x831E, "enableusability" },
    { 0x831F, "setwhizbyspreads" },
    { 0x8320, "setwhizbyradii" },
    { 0x8321, "setreverb" },
    { 0x8322, "deactivatereverb" },
    { 0x8323, "setvolmod" },
    { 0x8324, "setchannelvolume" },
    { 0x8325, "givestartammo" },
    { 0x8326, "givemaxammo" },
    { 0x8327, "getfractionstartammo" },
    { 0x8328, "getfractionmaxammo" },
    { 0x8329, "isdualwielding" },
    { 0x832A, "isreloading" },
    { 0x832B, "isswitchingweapon" },
    { 0x832C, "setorigin" },
    { 0x832D, "getvelocity" },
    { 0x832E, "setplayerangles" },
    { 0x832F, "getplayerangles" },
    { 0x8330, "usebuttonpressed" },
    { 0x8331, "attackbuttonpressed" },
    { 0x8332, "adsbuttonpressed" },
    { 0x8333, "meleebuttonpressed" },
    { 0x8334, "playerads" },
    { 0x8335, "isonground" },
    { 0x8336, "isusingturret" },
    { 0x8337, "setviewmodel" },
    { 0x8338, "setoffhandprimaryclass" },
    { 0x8339, "getoffhandprimaryclass" },
    { 0x833A, "startac130" },
    { 0x833B, "stopac130" },
    { 0x833C, "enablemousesteer" },
    { 0x833D, "setscriptmoverkillcam" },
    { 0x833E, "usinggamepad" },
    { 0x833F, "forcethirdpersonwhenfollowing" },
    { 0x8340, "disableforcethirdpersonwhenfollowing" },
    { 0x8341, "botsetflag" },
    { 0x8342, "botsetstance" },
    { 0x8343, "botsetscriptmove" },
    { 0x8344, "botsetscriptgoal" },
    { 0x8345, "botsetscriptgoalnode" },
    { 0x8346, "botclearscriptgoal" },
    { 0x8347, "botsetscriptenemy" },
    { 0x8348, "botclearscriptenemy" },
    { 0x8349, "botsetattacker" },
    { 0x834A, "botgetscriptgoal" },
    { 0x834B, "botgetscriptgoalradius" },
    { 0x834C, "botgetscriptgoalyaw" },
    { 0x834D, "botgetscriptgoaltype" },
    { 0x834E, "botgetentrancepoint" },
    { 0x834F, "botgetworldsize" },
    { 0x8350, "botnodeavailable" },
    { 0x8351, "botfindnoderandom" },
    { 0x8352, "botmemoryevent" },
    { 0x8353, "botmemoryselectpos" },
    { 0x8354, "botnodepick" },
    { 0x8355, "bothasscriptgoal" },
    { 0x8356, "botgetpersonality" },
    { 0x8357, "botthrowgrenade" },
    { 0x8358, "botgetmemoryevents" },
    { 0x8359, "botsetpersonality" },
    { 0x835A, "botsetdifficulty" },
    { 0x835B, "botgetdifficulty" },
    { 0x835C, "botgetworldclosestedge" },
    { 0x835D, "botlookatpoint" },
    { 0x835E, "botpredictseepoint" },
    { 0x835F, "botcanseeentity" },
    { 0x8360, "botgetnodesonpath" },
    { 0x8361, "botnodepickmultiple" },
    { 0x8362, "botgetnearestnode" },
    { 0x8363, "botgetfovdot" },
    { 0x8364, "botsetawareness" },
    { 0x8365, "botpursuingscriptgoal" },
    { 0x8366, "botgetscriptgoalnode" },
    { 0x8367, "botgetimperfectenemyinfo" },
    { 0x8368, "botflagmemoryevents" },
    { 0x8369, "botsetpathingstyle" },
    { 0x836A, "botsetdifficultysetting" },
    { 0x836B, "botgetdifficultysetting" },
    { 0x836C, "botgetpathdist" },
    { 0x836D, "botisrandomized" },
    { 0x836E, "botpressbutton" },
    { 0x836F, "botclearbutton" },
    { 0x8370, "botnodescoremultiple" },
    { 0x8371, "getnodenumber" },
    { 0x8372, "setclientowner" },
    { 0x8373, "setotherent" },
    { 0x8374, "playercommandbot" },
    { 0x8375, "setaisightlinevisible" },
    { 0x8376, "setentityowner" },
    { 0x8377, "nodeisdisconnected" },
    { 0x8378, "getnearestnode" },
    { 0x8379, "makeentitynomeleetarget" },
    { 0x837A, "isagent" },
    { 0x837B, "spawnagent" },
    { 0x837C, "finishagentdamage" },
    { 0x837D, "setagentattacker" },
    { 0x837E, "cloneagent" },
    { 0x837F, "agentcanseesentient" },
    { 0x8380, "scragentsetwaypoint" },
    { 0x8381, "scragentsetgoalpos" },
    { 0x8382, "scragentgetgoalpos" },
    { 0x8383, "scragentsetgoalnode" },
    { 0x8384, "scragentsetgoalentity" },
    { 0x8385, "scragentsetgoalradius" },
    { 0x8386, "scragentsetanimscale" },
    { 0x8387, "scragentsetorientmode" },
    { 0x8388, "scragentsetanimmode" },
    { 0x8389, "scragentsetphysicsmode" },
    { 0x838A, "scragentsetclipmode" },
    { 0x838B, "scragentsetmaxturnspeed" },
    { 0x838C, "scragentgetmaxturnspeed" },
    { 0x838D, "scragentbeginmelee" },
    { 0x838E, "scragentsetscripted" },
    { 0x838F, "scragentdotrajectory" },
    { 0x8390, "scragentdoanimlerp" },
    { 0x8391, "scragentsetviewheight" },
    { 0x8392, "scragentclaimnode" },
    { 0x8393, "scragentrelinquishclaimednode" },
    { 0x8394, "setdoghandler" },
    { 0x8395, "setdogcommand" },
    { 0x8396, "setdogattackradius" },
    { 0x8397, "isdogfollowinghandler" },
    { 0x8398, "setdogmaxdrivespeed" },
    { 0x8399, "isdogbeingdriven" },
    { 0x839A, "setdogautoattackwhendriven" },
    { 0x839B, "getdogattackbeginnode" },
    { 0x839C, "setanimclass" },
    { 0x839D, "enableanimstate" },
    { 0x839E, "setanimstate" },
    { 0x839F, "getanimentry" },
    { 0x83A0, "getanimentryname" },
    { 0x83A1, "getanimentryalias" },
    { 0x83A2, "getanimentrycount" },
    { 0x83A3, "pushplayervector" },
    { 0x83A4, "issprinting" },
    { 0x83A5, "playerlinkeduselinkedvelocity" },
    { 0x83A6, "shootstopsound" },
    { 0x83A7, "setclothtype" },
    { 0x83A8, "getclothmovesound" },
    { 0x83A9, "getequipmovesound" },
    { 0x83AA, "jumpbuttonpressed" },
    { 0x83AB, "rotateby" },
    { 0x83AC, "getlookaheaddir" },
    { 0x83AD, "getpathgoalpos" },
    { 0x83AE, "setrocketcorpse" },
    { 0x83AF, "setcorpsefalling" },
    { 0x83B0, "setsurfacetype" },
    { 0x83B1, "aiphysicstrace" },
    { 0x83B2, "aiphysicstracepassed" },
    { 0x83B3, "setdevtext" },
    { 0x83B4, "forcemovingplatformentity" },
    { 0x83B5, "setmovingplatformtrigger" },
    { 0x83B6, "visionsetstage" },
    { 0x83B7, "linkwaypointtotargetwithoffset" },
    { 0x83B8, "getlinkedparent" },
    { 0x83B9, "getmovingplatformparent" },
    { 0x83BA, "setnameplatematerial" },
    { 0x83BB, "retargetscriptmodellighting" },
    { 0x83BC, "setmantlesoundflavor" },
    { 0x83BD, "clearclienttriggeraudiozone" },
    { 0x83BE, "setclienttriggeraudiozone" },
    { 0x83BF, "makevehiclenotcollidewithplayers" },
    { 0x83C0, "getbobrate" },
    { 0x83C1, "setbobrate" },
    { 0x83C2, "setscriptablepartstate" },
    { 0x83C3, "stopsliding" },
    { 0x83C4, "cancelrocketcorpse" },
    { 0x83C5, "setdronegoalpos" },
    { 0x83C6, "hudoutlineenable" },
    { 0x83C7, "hudoutlinedisable" },
    { 0x83C8, "motionblurhqenable" },
    { 0x83C9, "motionblurhqdisable" },
    { 0x83CA, "screenshakeonentity" },
    { 0x83CB, "setpitchorient" },
    { 0x83CC, "worldpointtoscreenpos" },
    { 0x83CD, "linktoplayerviewignoreparentrot" },
    { 0x83CE, "shouldplaymeleedeathanim" },
    { 0x83CF, "botfirstavailablegrenade" },
    { 0x83D0, "visionsetwaterforplayer" },
    { 0x83D1, "setwatersurfacetransitionfx" },
    { 0x83D2, "linktoplayerviewfollowwatersurface" },
    { 0x83D3, "linktoplayerviewattachwatersurfacetransitioneffects" },
    { 0x83D4, "playersetwaterfog" },
    { 0x83D5, "emissiveblend" },
    { 0x83D6, "enableforceviewmodeldof" },
    { 0x83D7, "disableforceviewmodeldof" },
    { 0x83D8, "getcustomizationbody" },
    { 0x83D9, "getcustomizationhead" },
    { 0x83DA, "getcustomizationviewmodel" },
    { 0x83DB, "setviewmodeldepth" },
    { 0x83DC, "isenemyaware" },
    { 0x83DD, "hasenemybeenseen" },
    { 0x83DE, "physicssetmaxlinvel" },
    { 0x83DF, "physicssetmaxangvel" },
    { 0x83E0, "physicsgetlinvel" },
    { 0x83E1, "physicsgetlinspeed" },
    { 0x83E2, "physicsgetangvel" },
    { 0x83E3, "physicsgetangspeed" },
    { 0x83E4, "disablemissileboosting" },
    { 0x83E5, "enablemissileboosting" },
    { 0x83E6, "canspawntestclient" },
    { 0x83E7, "spawntestclient" },
    { 0x83E8, "loadcustomizationplayerview" },
    { 0x83E9, "setgrenadethrowscale" },
    { 0x83EA, "setgrenadecookscale" },
    { 0x83EB, "setplanesplineid" },
    { 0x83EC, "hudoutlineenableforclient" },
    { 0x83ED, "hudoutlinedisableforclient" },
    { 0x83EE, "hudoutlineenableforclients" },
    { 0x83EF, "hudoutlinedisableforclients" },
    { 0x83F0, "turretsetbarrelspinenabled" },
    { 0x83F1, "hasloadedcustomizationplayerview" },
    { 0x83F2, "setclienttriggeraudiozonelerp" },
    { 0x83F3, "setclienttriggeraudiozonepartial" },
    { 0x83F4, "scragentdoanimrelative" },
    { 0x83F5, "rotatetolinked" },
    { 0x83F6, "rotatebylinked" },
    { 0x83F7, "setlinkedangles" },
    { 0x83F8, "getcorpseentity" },
    { 0x83F9, "removefrommovingplatformsystem" },
    { 0x83FA, "logmatchdatalife" },
    { 0x83FB, "logmatchdatadeath" },
    { 0x83FC, "queuedialogforplayer" },
    { 0x83FD, "setmlgcameradefaults" },
    { 0x83FE, "ismlgspectator" },
    { 0x83FF, "disableautoreload" },
    { 0x8400, "enableautoreload" },
    { 0x8401, "issprintsliding" },
    { 0x8402, "getlinkedchildren" },
    { 0x8403, "botpredictenemycampspots" },
    { 0x8404, "playsoundonmovingent" },
    { 0x8405, "cancelmantle" },
    { 0x8406, "hasfemalecustomizationmodel" },
    { 0x8407, "setscriptabledamageowner" },
    { 0x8408, "setfxkilldefondelete" },
    { 0x8409, "getdogavoident" },
    { 0x840A, "enabledogavoidance" },
    { 0x840B, "forcedeathfall" },
    { 0x840C, "gethybridscopestate" },
    { 0x840D, "sethybridscopestate" },
    { 0x840E, "getvieworigin" },
    { 0x840F, "setweaponmodelvariant" },
    { 0x8410, "ridevehicle" },
    { 0x8411, "stopridingvehicle" },
    { 0x8412, "getmantlesound" },
    { 0x8413, "autoboltmissileeffects" },
    { 0x8414, "disablemissilestick" },
    { 0x8415, "enablemissilestick" },
    { 0x8416, "setmissileminimapvisible" },
    { 0x8417, "isoffhandweaponreadytothrow" },
    { 0x8418, "isleaning" },
    { 0x8419, "makecollidewithitemclip" },
    { 0x841A, "ismovementfromgamepad" },
    { 0x841B, "visionsetpostapplyforplayer" },
    { 0x841C, "setcommonplayerdatareservedint" },
    { 0x841D, "getclanwarsbonus" },
    { 0x841E, "getrankedplayerdatareservedint" },
    { 0x841F, "setrankedplayerdatareservedint" },
    { 0x8420, "setignorefoliagesightingme" },
    { 0x8421, "scragentusemodelcollisionbounds" },
    { 0x8422, "setmlgspectator" },
    { 0x8423, "getmlgspectatorteam" },
    { 0x8424, "getcommonplayerdatareservedint" },
    { 0x8425, "getcoopplayerdatareservedint" },
    { 0x8426, "setcoopplayerdatareservedint" },
    { 0x8427, "getjointype" },
    { 0x8428, "scragentsetwallruncost" },
    { 0x8429, "alienscheckisitempurchased" },
}};

} // namespace xsk::gsc::iw6_pc