///////////////////////////////////////////////////////////////////////////////
//
//  Copyright (C) 2014 Tavendo GmbH
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
///////////////////////////////////////////////////////////////////////////////

namespace autobahn {

inline wamp_register_request::wamp_register_request()
    : m_procedure()
    , m_response()
{
}

inline wamp_register_request::wamp_register_request(const wamp_procedure& procedure)
    : m_procedure(procedure)
    , m_response()
{
}

inline wamp_register_request::wamp_register_request(wamp_register_request&& other)
    : m_procedure(std::move(other.m_procedure))
    , m_response(std::move(other.m_response))
{
}

inline const wamp_procedure& wamp_register_request::procedure() const
{
    return m_procedure;
}

inline boost::promise<wamp_registration>& wamp_register_request::response()
{
    return m_response;
}

inline void wamp_register_request::set_response(const wamp_registration& registration)
{
    m_response.set_value(registration);
}

} // namespace autobahn