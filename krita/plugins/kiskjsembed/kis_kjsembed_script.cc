 /* This file is part of the KDE project
   Copyright (c) 2004 Cyrille Berger <cberger@cberger.net>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#include "kis_kjsembed_script.h"

// KJSEmbed
#include <kjsembed/kjsembedpart.h>

KisKJSEmbedScript::KisKJSEmbedScript(KJSEmbed::KJSEmbedPart* jsembedpart, const QString& script) :
m_jsEmbedPart(jsembedpart), m_script(script)
{
	
}


KisKJSEmbedScript* KisKJSEmbedScript::loadFromFile(KJSEmbed::KJSEmbedPart* jsembedpart, const QString& file)
{
	QString scripttxt = jsembedpart->loadFile(file);
	
	return 0;
}

void KisKJSEmbedScript::execute()
{
	KJS::Completion result = m_jsEmbedPart->completion();
	m_jsEmbedPart->execute( result, m_script, KJS::Null());
}

#include "kis_kjsembed_script.moc"
