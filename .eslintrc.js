module.exports = {
    env: {
        browser: true,
        es2021: true,
        node: true,
    },
    extends: ['eslint:recommended', 'plugin:@typescript-eslint/recommended', 'plugin:@typescript-eslint/recommended-requiring-type-checking', 'plugin:@typescript-eslint/strict', 'plugin:import/recommended'],
    parser: '@typescript-eslint/parser',
    parserOptions: {
        ecmaVersion: 'latest',
        sourceType: 'module',
        project: ['./tsconfig.eslint.json'],
    },
    plugins: ['@typescript-eslint', 'import'],
    rules: {
        // Typescript
        '@typescript-eslint/adjacent-overload-signatures': 'warn',
        '@typescript-eslint/array-type': [
            'warn', {
                default: 'array-simple',
            },
        ],
        '@typescript-eslint/ban-ts-comment': 'warn',
        '@typescript-eslint/ban-types': 'warn',
        '@typescript-eslint/consistent-type-assertions': [
            'warn', {
                assertionStyle: 'never',
            },
        ],
        '@typescript-eslint/consistent-type-exports': 'warn',
        // '@typescript-eslint/consistent-type-imports': 'warn',
        '@typescript-eslint/explicit-function-return-type': [
            'warn', {
                allowExpressions: true,
            },
        ],
        '@typescript-eslint/explicit-member-accessibility': [
            'warn', {
                accessibility: 'no-public',
            },
        ],
        '@typescript-eslint/explicit-module-boundary-types': 'warn',
        '@typescript-eslint/member-delimiter-style': [
            'warn', {
                multiline: {
                    delimiter: 'semi',
                    requireLast: true,
                },
                singleline: {
                    delimiter: 'semi',
                    requireLast: false,
                },
            },
        ],
        '@typescript-eslint/member-ordering': [
            'warn', {
                default: [

                    // Signatures
                    'signature',

                    // Fields
                    'public-static-field',
                    'static-field',
                    'public-field',
                    'field',

                    // Constructors
                    'public-constructor',
                    'constructor',

                    // Getters
                    'public-static-get',
                    'static-get',
                    'public-get',
                    'get',

                    // Setters
                    'public-static-set',
                    'static-set',
                    'public-set',
                    'set',

                    // Methods
                    'public-static-method',
                    'static-method',
                    'public-method',
                    'method',
                ],
            },
        ],
        '@typescript-eslint/method-signature-style': ['warn', 'method'],
        '@typescript-eslint/naming-convention': [
            'warn',
            {
                selector: 'default',
                format: ['camelCase'],
                leadingUnderscore: 'allow',
            },
            {
                selector: 'enumMember',
                format: ['PascalCase'],
            },
            {
                selector: 'objectLiteralProperty',
                format: null,
            },
            {
                selector: 'typeLike',
                format: ['PascalCase'],
            },
        ],
        '@typescript-eslint/no-confusing-void-expression': 'warn',
        '@typescript-eslint/no-empty-interface': [
            'warn', {
                allowSingleExtends: true,
            },
        ],
        '@typescript-eslint/no-explicit-any': [
            'warn', {
                ignoreRestArgs: true,
            },
        ],
        '@typescript-eslint/no-extra-non-null-assertion': 'warn',
        '@typescript-eslint/no-extraneous-class': [
            'warn', {
                allowStaticOnly: true,
                allowWithDecorator: true,
            },
        ],
        '@typescript-eslint/no-floating-promises': 'warn',
        '@typescript-eslint/no-for-in-array': 'warn',
        '@typescript-eslint/no-inferrable-types': 'warn',
        '@typescript-eslint/no-misused-new': 'warn',
        '@typescript-eslint/no-misused-promises': 'warn',
        '@typescript-eslint/no-namespace': 'warn',
        '@typescript-eslint/no-non-null-asserted-optional-chain': 'warn',
        '@typescript-eslint/no-redundant-type-constituents': 'warn',
        '@typescript-eslint/no-require-imports': 'warn',
        '@typescript-eslint/no-this-alias': 'warn',
        '@typescript-eslint/no-type-alias': [
            'warn', {
                allowAliases: 'in-unions-and-intersections',
                allowCallbacks: 'always',
                allowConditionalTypes: 'always',
                allowConstructors: 'always',
                allowLiterals: 'always',
                allowMappedTypes: 'always',
                allowTupleTypes: 'always',
                allowGenerics: 'always',
            },
        ],
        '@typescript-eslint/no-unnecessary-boolean-literal-compare': [
            'warn', {
                allowComparingNullableBooleansToTrue: false,
            },
        ],
        '@typescript-eslint/no-unnecessary-condition': 'off',
        '@typescript-eslint/no-unnecessary-qualifier': 'warn',
        '@typescript-eslint/no-unnecessary-type-constraint': 'warn',
        '@typescript-eslint/no-unnecessary-type-assertion': 'warn',
        '@typescript-eslint/no-unsafe-argument': 'warn',
        '@typescript-eslint/no-unsafe-assignment': 'warn',
        '@typescript-eslint/no-unsafe-call': 'warn',
        '@typescript-eslint/no-unsafe-member-access': 'warn',
        '@typescript-eslint/no-unsafe-return': 'warn',
        '@typescript-eslint/no-useless-empty-export': 'warn',
        '@typescript-eslint/no-var-requires': 'warn',
        '@typescript-eslint/parameter-properties': [
            'warn', {
                allow: [],
                prefer: 'parameter-property',
            },
        ],
        '@typescript-eslint/prefer-as-const': 'warn',
        '@typescript-eslint/prefer-namespace-keyword': 'warn',
        '@typescript-eslint/prefer-nullish-coalescing': [
            'warn', {
                ignoreTernaryTests: false,
            },
        ],
        '@typescript-eslint/prefer-regexp-exec': 'warn',
        '@typescript-eslint/promise-function-async': 'warn',
        '@typescript-eslint/restrict-plus-operands': 'warn',
        '@typescript-eslint/restrict-template-expressions': 'warn',
        '@typescript-eslint/switch-exhaustiveness-check': 'warn',
        '@typescript-eslint/triple-slash-reference': [
            'warn', {
                path: 'never',
                types: 'never',
                lib: 'never',
            },
        ],
        '@typescript-eslint/type-annotation-spacing': 'warn',
        '@typescript-eslint/unbound-method': [
            'warn', {
                ignoreStatic: true,
            },
        ],
        '@typescript-eslint/unified-signatures': [
            'warn', {
                ignoreDifferentlyNamedParameters: true,
            },
        ],
        '@typescript-eslint/brace-style': ['warn', '1tbs'],
        '@typescript-eslint/comma-dangle': [
            'warn', {
                arrays: 'always-multiline',
                objects: 'always-multiline',
                imports: 'always-multiline',
                exports: 'always-multiline',
                functions: 'always-multiline',
                enums: 'always-multiline',
                generics: 'always-multiline',
                tuples: 'always-multiline',
            },
        ],
        '@typescript-eslint/comma-spacing': 'warn',
        '@typescript-eslint/default-param-last': 'warn',
        '@typescript-eslint/dot-notation': 'warn',
        '@typescript-eslint/func-call-spacing': 'warn',
        '@typescript-eslint/indent': ['warn', 4],
        '@typescript-eslint/keyword-spacing': 'warn',
        '@typescript-eslint/no-array-constructor': 'warn',
        '@typescript-eslint/no-empty-function': 'warn',
        '@typescript-eslint/no-extra-semi': 'warn',
        '@typescript-eslint/no-implied-eval': 'warn',
        '@typescript-eslint/no-invalid-this': 'warn',
        '@typescript-eslint/no-loop-func': 'warn',
        '@typescript-eslint/no-magic-numbers': [
            'warn', {
                ignore: [0, 1, 2, 10],
                ignoreArrayIndexes: true,
                ignoreDefaultValues: true,
                ignoreEnums: true,
                ignoreNumericLiteralTypes: true,
                ignoreReadonlyClassProperties: true,
                ignoreTypeIndexes: true,
            },
        ],
        '@typescript-eslint/no-redeclare': 'warn',
        '@typescript-eslint/no-shadow': 'warn',
        '@typescript-eslint/no-throw-literal': 'warn',
        '@typescript-eslint/no-unused-expressions': 'warn',
        '@typescript-eslint/no-unused-vars': ['warn', { argsIgnorePattern: '^_+' }],
        '@typescript-eslint/no-use-before-define': 'warn',
        '@typescript-eslint/padding-line-between-statements': [
            'warn', {
                blankLine: 'always',
                prev: '*',
                next: ['return'],
            },
        ],
        '@typescript-eslint/quotes': [
            'warn', 'single', {
                avoidEscape: true,
            },
        ],
        '@typescript-eslint/require-await': 'warn',
        '@typescript-eslint/semi': ['warn'],
        '@typescript-eslint/space-before-blocks': 'warn',
        '@typescript-eslint/space-infix-ops': 'warn',


        // Import
        'import/first': 'warn',
        'import/newline-after-import': [
            'warn', {
                count: 1,
            },
        ],
        'import/no-absolute-path': 'warn',
        'import/no-cycle': 'warn',
        'import/no-deprecated': 'warn',
        'import/no-duplicates': 'warn',
        'import/no-internal-modules': [
            'warn', {
                forbid: ['src/testing/**'],
            },
        ],
        'import/no-self-import': 'warn',
        'import/no-useless-path-segments': 'warn',
        'import/order': 'warn',


        // Core
        'array-bracket-newline': ['warn', { multiline: true }],
        'array-element-newline': ['warn', 'consistent'],
        'arrow-parens': ['warn', 'as-needed'],
        'arrow-spacing': [
            'warn', {
                before: true,
                after: true,
            },
        ],
        'block-spacing': ['warn', 'always'],
        'brace-style': 'off',
        'comma-dangle': 'off',
        'comma-spacing': 'off',
        'comma-style': ['warn', 'last'],
        'computed-property-spacing': ['warn', 'never'],
        'curly': ['warn', 'all'],
        'default-param-last': 'off',
        'dot-location': ['warn', 'property'],
        'dot-notation': 'off',
        'func-call-spacing': 'off',
        'function-call-argument-newline': ['warn', 'consistent'],
        'function-paren-newline': ['warn', 'multiline'],
        'indent': 'off',
        'init-declarations': 'off',
        'key-spacing': [
            'warn', {
                beforeColon: false,
            },
        ],
        'keyword-spacing': 'off',
        'lines-around-comment': [
            'warn', {
                beforeBlockComment: true,
                beforeLineComment: false,
                allowBlockStart: true,
                allowBlockEnd: true,
                allowArrayStart: true,
                allowArrayEnd: true,
                allowObjectStart: true,
                allowObjectEnd: true,
                allowClassStart: true,
                allowClassEnd: true,
                ignorePattern: '[:;{,}\\(\\)\\*]',
            },
        ],
        'max-classes-per-file': ['warn', 1],
        'max-len': [
            'warn', {
                code: 120,
                comments: 100,
                ignoreUrls: true,
                ignoreStrings: true,
                ignoreTemplateLiterals: true,
                ignoreRegExpLiterals: true,

            },
        ],
        'max-statements-per-line': ['warn', { max: 1 }],
        'multiline-ternary': ['warn', 'always-multiline'],
        'newline-per-chained-call': ['warn', { ignoreChainWithDepth: 2 }],
        'no-constant-condition': 'off',
        'no-array-constructor': 'off',
        'no-else-return': 'warn',
        'no-empty': 'warn',
        'no-empty-function': 'off',
        'no-extra-semi': 'off',
        'no-implied-eval': 'off',
        'no-invalid-this': 'off',
        'no-floating-decimal': 'warn',
        'no-lonely-if': 'warn',
        'no-magic-numbers': 'off',
        'no-mixed-spaces-and-tabs': 'warn',
        'no-multi-spaces': 'warn',
        'no-multiple-empty-lines': [
            'warn', {
                max: 2,
                maxEOF: 0,
                maxBOF: 0,
            },
        ],
        'no-negated-condition': 'warn',
        'no-redeclare': 'off',
        'no-shadow': 'off',
        'no-throw-literal': 'off',
        'no-trailing-spaces': 'warn',
        'no-unneeded-ternary': 'warn',
        'no-unused-expressions': 'off',
        'no-unused-vars': 'off',
        'no-use-before-define': 'off',
        'no-var': 'warn',
        'no-whitespace-before-property': 'warn',
        'object-curly-newline': [
            'warn', {
                multiline: true,
                consistent: true,
            },
        ],
        'object-curly-spacing': ['warn', 'always'],
        'object-property-newline': ['warn', { allowAllPropertiesOnSameLine: true }],
        // 'padded-blocks': ['warn', 'never'],
        'padding-line-between-statements': 'off',
        'prefer-const': 'warn',
        'prefer-spread': 'warn',
        'prefer-template': 'warn',
        'quote-props': ['warn', 'consistent-as-needed'],
        'quotes': 'off',
        'rest-spread-spacing': ['warn', 'never'],
        'semi': 'off',
        'semi-style': 'warn',
        'semi-spacing': 'warn',
        'space-before-blocks': 'off',
        'space-before-function-paren': [
            'warn', {
                anonymous: 'never',
                named: 'never',
                asyncArrow: 'always',
            },
        ],
        'space-in-parens': 'warn',
        'space-infix-ops': 'off',
        'space-unary-ops': 'warn',
        'switch-colon-spacing': 'warn',
        'template-curly-spacing': ['warn', 'always'],
        'wrap-iife': ['warn', 'inside'],
    },
    overrides: [
        {
            // Javascript files
            files: ['**/*.js'],
            rules: {
                '@typescript-eslint/naming-convention': 'off',
                '@typescript-eslint/no-magic-numbers': 'off',
                '@typescript-eslint/no-require-imports': 'off',
                '@typescript-eslint/no-unsafe-assignment': 'off',
                '@typescript-eslint/no-unsafe-call': 'off',
                '@typescript-eslint/no-unsafe-member-access': 'off',
                '@typescript-eslint/no-var-requires': 'off',
                'import/no-internal-modules': 'off',
                'object-property-newline': ['warn', { allowAllPropertiesOnSameLine: false }],
            },
        },
        {
            // Declaration files
            files: ['**/*.d.ts'],
            rules: {
                'max-len': 'off',
                'no-var': 'off',
            },
        },
        {
            // Angular modules
            files: ['**/*.module.ts'],
            rules: {
                'array-bracket-newline': ['warn', 'consistent'],
            },
        },
        {
            // Angular services
            files: ['**/*.service.ts'],
            rules: {
                'max-len': [
                    'warn', {
                        code: 140,
                        comments: 100,
                        ignoreUrls: true,
                        ignoreStrings: true,
                        ignoreTemplateLiterals: true,
                        ignoreRegExpLiterals: true,
                    },
                ],
            },
        },
        {
            // Spec files
            files: ['**/*.spec.ts'],
            rules: {
                '@typescript-eslint/consistent-type-assertions': [
                    'warn', {
                        assertionStyle: 'as',
                    },
                ],
                '@typescript-eslint/no-magic-numbers': 'off',
                '@typescript-eslint/no-non-null-assertion': 'off',
                '@typescript-eslint/no-use-before-define': 'off',
                '@typescript-eslint/semi': 'off',
                '@typescript-eslint/unbound-method': 'off',
                'array-bracket-newline': ['warn', 'consistent'],
                'arrow-parens': ['warn', 'as-needed', { requireForBlockBody: true }],
                'function-paren-newline': ['warn', 'consistent'],
                'max-classes-per-file': 'off',
                'max-len': 'off',
                'no-multi-spaces': 'off',
                'padded-blocks': 'off',
            },
        },
        {
            // Testing framework files
            files: ['src/testing/**/*'],
            rules: {
                '@typescript-eslint/consistent-type-assertions': [
                    'warn', {
                        assertionStyle: 'as',
                    },
                ],
                '@typescript-eslint/no-use-before-define': 'off',
                '@typescript-eslint/ban-types': [
                    'warn', {
                        types: {
                            Function: false,
                            Object: false,
                        },
                        extendDefaults: true,
                    },
                ],
                'max-len': 'off',
                'prefer-spread': 'off',
            },
        },
        {
            // Decorators
            files: ['**/*.decorator.*'],
            rules: {
                '@typescript-eslint/naming-convention': [
                    'warn',
                    {
                        selector: 'default',
                        format: ['camelCase'],
                        leadingUnderscore: 'allow',
                    },
                    {
                        selector: 'enumMember',
                        format: ['PascalCase'],
                    },
                    {
                        selector: 'function',
                        format: ['camelCase', 'PascalCase'],
                    },
                    {
                        selector: 'typeLike',
                        format: ['PascalCase'],
                    },
                ],
            },
        },
    ],
    settings: {
        'import/resolver': {
            typescript: {
                alwaysTryTypes: true,
            },
        },
    },
};
