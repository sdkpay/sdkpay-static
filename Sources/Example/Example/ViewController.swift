//
//  ViewController.swift
//  Example
//
//  Created by Ипатов Александр Станиславович on 23.03.2023.
//

import UIKit
import SberPaySDK

class ViewController: UIViewController {
    private lazy var sberPayButton: SBPButton = {
        let view = SBPButton()
        view.tapAction = {
            self.sberPayButtonTapped()
        }
        return view
    }()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        if SBPay.isReadyForSberPay {
            setupButton()
        }
    }
    
    private func setupButton() {
        view.addSubview(sberPayButton)
        sberPayButton.translatesAutoresizingMaskIntoConstraints = false
        NSLayoutConstraint.activate([
            sberPayButton.leadingAnchor.constraint(equalTo: view.leadingAnchor,
                                                   constant: 16),
            sberPayButton.trailingAnchor.constraint(equalTo: view.trailingAnchor,
                                                    constant: -16),
            sberPayButton.bottomAnchor.constraint(equalTo: view.bottomAnchor,
                                                  constant: -16)
        ])
    }
    
    private func sberPayButtonTapped() {
        let request = SBFullPaymentRequest(apiKey: "apiKey",
                                           merchantLogin: "Test shop",
                                           orderId: "orderId",
                                           redirectUri: "sberPayExampleapp://sberidauth")
        SBPay.payWithOrderId(with: self, with: request) { state, info  in
            switch state {
            case .success:
                print("Успешный результат")
            case .waiting:
                print("Необходимо проверить статус оплаты")
            case .error:
                print("\(info) - описание ошибки")
            @unknown default:
                print("Неопределенная ошибка")
            }
        }
    }
}

