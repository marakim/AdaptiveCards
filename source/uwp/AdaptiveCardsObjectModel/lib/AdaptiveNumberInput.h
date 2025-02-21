// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "NumberInput.h"
#include "AdaptiveInputElement.h"

namespace AdaptiveCards::ObjectModel::Uwp
{
    class DECLSPEC_UUID("e54a7a83-8961-4745-8663-bbf5d45b6345") AdaptiveNumberInput
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::ObjectModel::Uwp::IAdaptiveNumberInput,
                                              ABI::AdaptiveCards::ObjectModel::Uwp::IAdaptiveInputElement,
                                              ABI::AdaptiveCards::ObjectModel::Uwp::IAdaptiveCardElement,
                                              Microsoft::WRL::CloakedIid<ITypePeek>,
                                              Microsoft::WRL::CloakedIid<AdaptiveCards::ObjectModel::Uwp::AdaptiveInputElementBase>>
    {
        AdaptiveRuntime(AdaptiveNumberInput);

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(const std::shared_ptr<AdaptiveCards::NumberInput>& sharedNumberInput);

        // IAdaptiveNumberInput
        IFACEMETHODIMP get_Placeholder(_Outptr_ HSTRING* placeholder) override;
        IFACEMETHODIMP put_Placeholder(_In_ HSTRING placeholder) override;

        IFACEMETHODIMP get_Value(_Out_ ABI::Windows::Foundation::IReference<double>** value) override;
        IFACEMETHODIMP put_Value(ABI::Windows::Foundation::IReference<double>* value) override;

        IFACEMETHODIMP get_Max(_Out_ ABI::Windows::Foundation::IReference<double>** value) override;
        IFACEMETHODIMP put_Max(ABI::Windows::Foundation::IReference<double>* value) override;

        IFACEMETHODIMP get_Min(_Out_ ABI::Windows::Foundation::IReference<double>** value) override;
        IFACEMETHODIMP put_Min(ABI::Windows::Foundation::IReference<double>* value) override;

        // IAdaptiveInputElement
        IFACEMETHODIMP get_IsRequired(_Out_ boolean* isRequired) override
        {
            return AdaptiveInputElementBase::get_IsRequired(isRequired);
        }
        IFACEMETHODIMP put_IsRequired(boolean isRequired) override
        {
            return AdaptiveInputElementBase::put_IsRequired(isRequired);
        }

        IFACEMETHODIMP get_ErrorMessage(_Outptr_ HSTRING* errorMessage) override
        {
            return AdaptiveInputElementBase::get_ErrorMessage(errorMessage);
        }
        IFACEMETHODIMP put_ErrorMessage(_In_ HSTRING errorMessage) override
        {
            return AdaptiveInputElementBase::put_ErrorMessage(errorMessage);
        }

        IFACEMETHODIMP get_Label(_Outptr_ HSTRING* label) override
        {
            return AdaptiveInputElementBase::get_Label(label);
        }

        IFACEMETHODIMP put_Label(_In_ HSTRING label) override { return AdaptiveInputElementBase::put_Label(label); }

        // IAdaptiveCardElement
        IFACEMETHODIMP get_ElementType(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::ElementType* elementType) override;

        IFACEMETHODIMP get_Spacing(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::Spacing* spacing) override
        {
            return AdaptiveCardElementBase::get_Spacing(spacing);
        }
        IFACEMETHODIMP put_Spacing(ABI::AdaptiveCards::ObjectModel::Uwp::Spacing spacing) override
        {
            return AdaptiveCardElementBase::put_Spacing(spacing);
        }

        IFACEMETHODIMP get_Separator(_Out_ boolean* separator) override
        {
            return AdaptiveCardElementBase::get_Separator(separator);
        }
        IFACEMETHODIMP put_Separator(boolean separator) override
        {
            return AdaptiveCardElementBase::put_Separator(separator);
        }

        IFACEMETHODIMP get_IsVisible(_Out_ boolean* isVisible) override
        {
            return AdaptiveCardElementBase::get_IsVisible(isVisible);
        }
        IFACEMETHODIMP put_IsVisible(boolean isVisible) override
        {
            return AdaptiveCardElementBase::put_IsVisible(isVisible);
        }

        IFACEMETHODIMP get_Id(_Outptr_ HSTRING* id) override { return AdaptiveCardElementBase::get_Id(id); }
        IFACEMETHODIMP put_Id(_In_ HSTRING id) override { return AdaptiveCardElementBase::put_Id(id); }

        IFACEMETHODIMP get_FallbackType(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::FallbackType* fallback) override
        {
            return AdaptiveCardElementBase::get_FallbackType(fallback);
        }
        IFACEMETHODIMP get_FallbackContent(_COM_Outptr_ ABI::AdaptiveCards::ObjectModel::Uwp::IAdaptiveCardElement** content) override
        {
            return AdaptiveCardElementBase::get_FallbackContent(content);
        }

        IFACEMETHODIMP put_FallbackType(ABI::AdaptiveCards::ObjectModel::Uwp::FallbackType fallback) override
        {
            return AdaptiveCardElementBase::put_FallbackType(fallback);
        }

        IFACEMETHODIMP put_FallbackContent(_In_ ABI::AdaptiveCards::ObjectModel::Uwp::IAdaptiveCardElement* content) override
        {
            return AdaptiveCardElementBase::put_FallbackContent(content);
        }

        IFACEMETHODIMP get_ElementTypeString(_Outptr_ HSTRING* value) override
        {
            return AdaptiveCardElementBase::get_ElementTypeString(value);
        }

        IFACEMETHODIMP get_AdditionalProperties(_COM_Outptr_ ABI::Windows::Data::Json::IJsonObject** result) override
        {
            return AdaptiveCardElementBase::get_AdditionalProperties(result);
        }
        IFACEMETHODIMP put_AdditionalProperties(_In_ ABI::Windows::Data::Json::IJsonObject* value) override
        {
            return AdaptiveCardElementBase::put_AdditionalProperties(value);
        }

        IFACEMETHODIMP get_Requirements(
            _COM_Outptr_ ABI::Windows::Foundation::Collections::IVector<ABI::AdaptiveCards::ObjectModel::Uwp::AdaptiveRequirement*>** requirements) override
        {
            return AdaptiveCardElementBase::get_Requirements(requirements);
        }

        IFACEMETHODIMP ToJson(_COM_Outptr_ ABI::Windows::Data::Json::IJsonObject** result) override
        {
            return AdaptiveCardElementBase::ToJson(result);
        }

        virtual HRESULT GetSharedModel(std::shared_ptr<AdaptiveCards::BaseCardElement>& sharedModel) override;

        IFACEMETHODIMP get_Height(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::HeightType* height) override
        {
            return AdaptiveCardElementBase::get_Height(height);
        }
        IFACEMETHODIMP put_Height(ABI::AdaptiveCards::ObjectModel::Uwp::HeightType height) override
        {
            return AdaptiveCardElementBase::put_Height(height);
        }

        // ITypePeek method
        void* PeekAt(REFIID riid) override { return PeekHelper(riid, this); }

    private:
        winrt::com_ptr<ABI::Windows::Foundation::IReference<double>> m_max;
        winrt::com_ptr<ABI::Windows::Foundation::IReference<double>> m_min;
        winrt::com_ptr<ABI::Windows::Foundation::IReference<double>> m_value;
        Microsoft::WRL::Wrappers::HString m_placeholder;
    };

    ActivatableClass(AdaptiveNumberInput);
}
