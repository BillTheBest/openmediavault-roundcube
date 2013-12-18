<?php

/*
 +-----------------------------------------------------------------------+
 | plugins/managesieve/localization/<lang>.inc                           |
 |                                                                       |
 | Localization file of the Roundcube Webmail Managesieve plugin         |
 | Copyright (C) 2012-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-managesieve/
*/
$labels['filters'] = 'Filters';
$labels['managefilters'] = 'Manage incoming mail filters';
$labels['filtername'] = 'Filter name';
$labels['newfilter'] = 'New filter';
$labels['filteradd'] = 'Add filter';
$labels['filterdel'] = 'Delete filter';
$labels['moveup'] = 'Move up';
$labels['movedown'] = 'Move down';
$labels['filterallof'] = 'matching all of the following rules';
$labels['filteranyof'] = 'matching any of the following rules';
$labels['filterany'] = 'all messages';
$labels['filtercontains'] = 'contains';
$labels['filternotcontains'] = 'not contains';
$labels['filteris'] = 'is equal to';
$labels['filterisnot'] = 'is not equal to';
$labels['filterexists'] = 'exists';
$labels['filternotexists'] = 'not exists';
$labels['filtermatches'] = 'matches expression';
$labels['filternotmatches'] = 'not matches expression';
$labels['filterregex'] = 'matches regular expression';
$labels['filternotregex'] = 'not matches regular expression';
$labels['filterunder'] = 'under';
$labels['filterover'] = 'over';
$labels['addrule'] = 'Add rule';
$labels['delrule'] = 'Delete rule';
$labels['messagemoveto'] = 'Move message to';
$labels['messageredirect'] = 'Redirect message to';
$labels['messagecopyto'] = 'Copy message to';
$labels['messagesendcopy'] = 'Send message copy to';
$labels['messagereply'] = 'Reply with message';
$labels['messagedelete'] = 'Delete message';
$labels['messagediscard'] = 'Discard with message';
$labels['messagesrules'] = 'For incoming mail:';
$labels['messagesactions'] = '...execute the following actions:';
$labels['add'] = 'Add';
$labels['del'] = 'Delete';
$labels['sender'] = 'Sender';
$labels['recipient'] = 'Recipient';
$labels['vacationdays'] = 'How often send messages (in days):';
$labels['vacationreason'] = 'Message body (vacation reason):';
$labels['vacationsubject'] = 'Message subject:';
$labels['rulestop'] = 'Stop evaluating rules';
$labels['enable'] = 'Enable/Disable';
$labels['filterset'] = 'Filters set';
$labels['filtersets'] = 'Filter sets';
$labels['filtersetadd'] = 'Add filters set';
$labels['filtersetdel'] = 'Delete current filters set';
$labels['filtersetact'] = 'Activate current filters set';
$labels['filtersetdeact'] = 'Deactivate current filters set';
$labels['filterdef'] = 'Filter definition';
$labels['filtersetname'] = 'Filters set name';
$labels['newfilterset'] = 'New filters set';
$labels['active'] = 'active';
$labels['none'] = 'none';
$labels['fromset'] = 'from set';
$labels['fromfile'] = 'from file';
$labels['filterdisabled'] = 'Filter disabled';
$labels['countisgreaterthan'] = 'count is greater than';
$labels['countisgreaterthanequal'] = 'count is greater than or equal to';
$labels['countislessthan'] = 'count is less than';
$labels['countislessthanequal'] = 'count is less than or equal to';
$labels['countequals'] = 'count is equal to';
$labels['valueisgreaterthan'] = 'value is greater than';
$labels['valueisgreaterthanequal'] = 'value is greater than or equal to';
$labels['valueislessthan'] = 'value is less than';
$labels['valueislessthanequal'] = 'value is less than or equal to';
$labels['valueequals'] = 'value is equal to';
$labels['setflags'] = 'Set flags to the message';
$labels['addflags'] = 'Add flags to the message';
$labels['removeflags'] = 'Remove flags from the message';
$labels['flagread'] = 'Read';
$labels['flagdeleted'] = 'Deleted';
$labels['flaganswered'] = 'Answered';
$labels['flagflagged'] = 'Flagged';
$labels['flagdraft'] = 'Draft';
$labels['filtercreate'] = 'Create filter';
$labels['usedata'] = 'Use following data in the filter:';
$labels['nextstep'] = 'Next Step';
$labels['...'] = '...';
$labels['advancedopts'] = 'Advanced options';
$labels['body'] = 'Body';
$labels['address'] = 'address';
$labels['envelope'] = 'envelope';
$labels['modifier'] = 'modifier:';
$labels['text'] = 'text';
$labels['undecoded'] = 'undecoded (raw)';
$labels['contenttype'] = 'content type';
$labels['modtype'] = 'type:';
$labels['allparts'] = 'all';
$labels['domain'] = 'domain';
$labels['localpart'] = 'local part';
$labels['user'] = 'user';
$labels['detail'] = 'detail';
$labels['comparator'] = 'comparator:';
$labels['default'] = 'default';
$labels['octet'] = 'strict (octet)';
$labels['asciicasemap'] = 'case insensitive (ascii-casemap)';
$labels['asciinumeric'] = 'numeric (ascii-numeric)';
$messages['filterunknownerror'] = 'Unknown server error';
$messages['filterconnerror'] = 'Unable to connect to managesieve server';
$messages['filterdeleted'] = 'Filter deleted successfully';
$messages['filtersaved'] = 'Filter saved successfully';
$messages['filterdeleteconfirm'] = 'Do you really want to delete selected filter?';
$messages['ruledeleteconfirm'] = 'Are you sure, you want to delete selected rule?';
$messages['actiondeleteconfirm'] = 'Are you sure, you want to delete selected action?';
$messages['forbiddenchars'] = 'Forbidden characters in field';
$messages['cannotbeempty'] = 'Field cannot be empty';
$messages['ruleexist'] = 'Filter with specified name already exists.';
$messages['setactivated'] = 'Filters set activated successfully.';
$messages['setdeactivated'] = 'Filters set deactivated successfully.';
$messages['setdeleted'] = 'Filters set deleted successfully.';
$messages['setdeleteconfirm'] = 'Are you sure, you want to delete selected filters set?';
$messages['setcreated'] = 'Filters set created successfully.';
$messages['deactivated'] = 'Filter(s) disabled successfully.';
$messages['activated'] = 'Filter(s) enabled successfully.';
$messages['moved'] = 'Filter moved successfully.';
$messages['nametoolong'] = 'Name too long.';
$messages['namereserved'] = 'Reserved name.';
$messages['setexist'] = 'Set already exists.';
$messages['nodata'] = 'At least one position must be selected!';
?>