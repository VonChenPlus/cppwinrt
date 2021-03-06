// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Globalization.PhoneNumberFormatting.0.h"
#include "Windows.Foundation.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Globalization::PhoneNumberFormatting {

struct __declspec(uuid("1556b49e-bad4-4b4a-900d-4407adb7c981")) __declspec(novtable) IPhoneNumberFormatter : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Format(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * number, hstring * result) = 0;
    virtual HRESULT __stdcall abi_FormatWithOutputFormat(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * number, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat numberFormat, hstring * result) = 0;
    virtual HRESULT __stdcall abi_FormatPartialString(hstring number, hstring * result) = 0;
    virtual HRESULT __stdcall abi_FormatString(hstring number, hstring * result) = 0;
    virtual HRESULT __stdcall abi_FormatStringWithLeftToRightMarkers(hstring number, hstring * result) = 0;
};

struct __declspec(uuid("5ca6f931-84d9-414b-ab4e-a0552c878602")) __declspec(novtable) IPhoneNumberFormatterStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryCreate(hstring regionCode, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter ** phoneNumber) = 0;
    virtual HRESULT __stdcall abi_GetCountryCodeForRegion(hstring regionCode, int32_t * result) = 0;
    virtual HRESULT __stdcall abi_GetNationalDirectDialingPrefixForRegion(hstring regionCode, bool stripNonDigit, hstring * result) = 0;
    virtual HRESULT __stdcall abi_WrapWithLeftToRightMarkers(hstring number, hstring * result) = 0;
};

struct __declspec(uuid("1c7ce4dd-c8b4-4ea3-9aef-b342e2c5b417")) __declspec(novtable) IPhoneNumberInfo : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CountryCode(int32_t * value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetLengthOfGeographicalAreaCode(int32_t * result) = 0;
    virtual HRESULT __stdcall abi_GetNationalSignificantNumber(hstring * result) = 0;
    virtual HRESULT __stdcall abi_GetLengthOfNationalDestinationCode(int32_t * result) = 0;
    virtual HRESULT __stdcall abi_PredictNumberKind(winrt::Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind * result) = 0;
    virtual HRESULT __stdcall abi_GetGeographicRegionCode(hstring * result) = 0;
    virtual HRESULT __stdcall abi_CheckNumberMatch(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo * otherNumber, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult * result) = 0;
};

struct __declspec(uuid("8202b964-adaa-4cff-8fcf-17e7516a28ff")) __declspec(novtable) IPhoneNumberInfoFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(hstring number, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo ** result) = 0;
};

struct __declspec(uuid("5b3f4f6a-86a9-40e9-8649-6d61161928d4")) __declspec(novtable) IPhoneNumberInfoStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryParse(hstring input, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo ** phoneNumber, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult * result) = 0;
    virtual HRESULT __stdcall abi_TryParseWithRegion(hstring input, hstring regionCode, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo ** phoneNumber, winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult * result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter> { using default_interface = Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter; };
template <> struct traits<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo> { using default_interface = Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo; };

}

namespace Windows::Globalization::PhoneNumberFormatting {

template <typename T> struct impl_IPhoneNumberFormatter;
template <typename T> struct impl_IPhoneNumberFormatterStatics;
template <typename T> struct impl_IPhoneNumberInfo;
template <typename T> struct impl_IPhoneNumberInfoFactory;
template <typename T> struct impl_IPhoneNumberInfoStatics;

}

namespace impl {

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter;
    template <typename D> using consume = Windows::Globalization::PhoneNumberFormatting::impl_IPhoneNumberFormatter<D>;
};

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics;
    template <typename D> using consume = Windows::Globalization::PhoneNumberFormatting::impl_IPhoneNumberFormatterStatics<D>;
};

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo;
    template <typename D> using consume = Windows::Globalization::PhoneNumberFormatting::impl_IPhoneNumberInfo<D>;
};

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory;
    template <typename D> using consume = Windows::Globalization::PhoneNumberFormatting::impl_IPhoneNumberInfoFactory<D>;
};

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics;
    template <typename D> using consume = Windows::Globalization::PhoneNumberFormatting::impl_IPhoneNumberInfoStatics<D>;
};

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter"; }
};

template <> struct traits<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>
{
    using abi = ABI::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo"; }
};

}

}
