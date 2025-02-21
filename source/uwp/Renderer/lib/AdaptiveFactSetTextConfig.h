// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#pragma once

#include "AdaptiveTextStyleConfig.h"

namespace AdaptiveCards::Rendering::Uwp
{
    class AdaptiveFactSetTextConfig
        : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<Microsoft::WRL::RuntimeClassType::WinRtClassicComMix>,
                                              ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveFactSetTextConfig,
                                              ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveTextStyleConfig,
                                              Microsoft::WRL::CloakedIid<AdaptiveCards::Rendering::Uwp::AdaptiveTextStyleConfigBase>>
    {
        AdaptiveRuntime(AdaptiveFactSetTextConfig);

    public:
        HRESULT RuntimeClassInitialize() noexcept;
        HRESULT RuntimeClassInitialize(FactSetTextConfig textConfig) noexcept;

        IFACEMETHODIMP get_Wrap(_Out_ boolean* wrap) override;
        IFACEMETHODIMP put_Wrap(boolean wrap) override;

        IFACEMETHODIMP get_MaxWidth(_Out_ UINT32* maxWidth) override;
        IFACEMETHODIMP put_MaxWidth(UINT32 maxWidth) override;

        IFACEMETHODIMP get_Weight(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::TextWeight* textWeight) override
        {
            return AdaptiveTextStyleConfigBase::get_Weight(textWeight);
        }

        IFACEMETHODIMP put_Weight(ABI::AdaptiveCards::ObjectModel::Uwp::TextWeight textWeight) override
        {
            return AdaptiveTextStyleConfigBase::put_Weight(textWeight);
        }

        IFACEMETHODIMP get_Size(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::TextSize* textSize) override
        {
            return AdaptiveTextStyleConfigBase::get_Size(textSize);
        }

        IFACEMETHODIMP put_Size(ABI::AdaptiveCards::ObjectModel::Uwp::TextSize textSize) override
        {
            return AdaptiveTextStyleConfigBase::put_Size(textSize);
        }

        IFACEMETHODIMP get_Color(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::ForegroundColor* textColor) override
        {
            return AdaptiveTextStyleConfigBase::get_Color(textColor);
        }

        IFACEMETHODIMP put_Color(ABI::AdaptiveCards::ObjectModel::Uwp::ForegroundColor textColor) override
        {
            return AdaptiveTextStyleConfigBase::put_Color(textColor);
        }

        IFACEMETHODIMP get_IsSubtle(_Out_ boolean* isSubtle) override
        {
            return AdaptiveTextStyleConfigBase::get_IsSubtle(isSubtle);
        }

        IFACEMETHODIMP put_IsSubtle(boolean isSubtle) override
        {
            return AdaptiveTextStyleConfigBase::put_IsSubtle(isSubtle);
        }

        IFACEMETHODIMP get_FontType(_Out_ ABI::AdaptiveCards::ObjectModel::Uwp::FontType* fontType) override
        {
            return AdaptiveTextStyleConfigBase::get_FontType(fontType);
        }

        IFACEMETHODIMP put_FontType(ABI::AdaptiveCards::ObjectModel::Uwp::FontType fontType) override
        {
            return AdaptiveTextStyleConfigBase::put_FontType(fontType);
        }

    private:
        boolean m_wrap;
        UINT32 m_maxWidth;
    };

    ActivatableClass(AdaptiveFactSetTextConfig);
}
