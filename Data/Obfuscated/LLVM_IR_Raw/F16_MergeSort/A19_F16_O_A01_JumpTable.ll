@.str = constant [5 x i8] c"%d%s\00"
@.str.1 = constant [1 x i8] zeroinitializer
@.str.2 = constant [2 x i8] c" \00"
@.str.3 = constant [2 x i8] c"\0A\00"
define dso_local void @Z4(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %16, label %153
16:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %6
  %20 = add nsw i32 %18, %19
  %21 = sdiv i32 %20, 2
  store i32 %21, i32* %7
  %22 = load i32*, i32** %4
  %23 = load i32, i32* %5
  %24 = load i32, i32* %7
  call void @Z4(i32* %22, i32 %23, i32 %24)
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  %28 = load i32, i32* %6
  call void @Z4(i32* %25, i32 %27, i32 %28)
  %30 = load i32, i32* %6
  %31 = load i32, i32* %5
  %32 = sub nsw i32 %30, %31
  %33 = add nsw i32 %32, 1
  %34 = mul nsw i32 %33, 4
  %35 = sext i32 %34 to i64
  %36 = call noalias i8* @malloc(i64 %35)
  store i32* %37, i32** %8
  %39 = load i32, i32* %5
  store i32 %39, i32* %9
  %41 = load i32, i32* %7
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %10
  store i32 0, i32* %11
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = load i32, i32* %7
  %47 = icmp sle i32 %45, %46
  br i1 %47, label %48, label %88
48:
  %49 = load i32, i32* %10
  %50 = load i32, i32* %6
  %51 = icmp sle i32 %49, %50
  br i1 %51, label %52, label %88
52:
  %53 = load i32*, i32** %4
  %54 = load i32, i32* %9
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %53, i64 %55
  %57 = load i32, i32* %56
  %58 = load i32*, i32** %4
  %59 = load i32, i32* %10
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = icmp sle i32 %57, %62
  br i1 %63, label %64, label %76
64:
  %65 = load i32*, i32** %4
  %66 = load i32, i32* %9
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %9
  %68 = sext i32 %66 to i64
  %69 = getelementptr inbounds i32, i32* %65, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %8
  %72 = load i32, i32* %11
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %11
  %74 = sext i32 %72 to i64
  %75 = getelementptr inbounds i32, i32* %71, i64 %74
  store i32 %70, i32* %75
  br label %44
76:
  %77 = load i32*, i32** %4
  %78 = load i32, i32* %10
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %10
  %80 = sext i32 %78 to i64
  %81 = getelementptr inbounds i32, i32* %77, i64 %80
  %82 = load i32, i32* %81
  %83 = load i32*, i32** %8
  %84 = load i32, i32* %11
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %11
  %86 = sext i32 %84 to i64
  %87 = getelementptr inbounds i32, i32* %83, i64 %86
  store i32 %82, i32* %87
  br label %44
88:
  br label %89
89:
  %90 = load i32, i32* %9
  %91 = load i32, i32* %7
  %92 = icmp sle i32 %90, %91
  br i1 %92, label %93, label %105
93:
  %94 = load i32*, i32** %4
  %95 = load i32, i32* %9
  %96 = add nsw i32 %95, 1
  store i32 %96, i32* %9
  %97 = sext i32 %95 to i64
  %98 = getelementptr inbounds i32, i32* %94, i64 %97
  %99 = load i32, i32* %98
  %100 = load i32*, i32** %8
  %101 = load i32, i32* %11
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %11
  %103 = sext i32 %101 to i64
  %104 = getelementptr inbounds i32, i32* %100, i64 %103
  store i32 %99, i32* %104
  br label %89
105:
  br label %106
106:
  %107 = load i32, i32* %10
  %108 = load i32, i32* %6
  %109 = icmp sle i32 %107, %108
  br i1 %109, label %110, label %122
110:
  %111 = load i32*, i32** %4
  %112 = load i32, i32* %10
  %113 = add nsw i32 %112, 1
  store i32 %113, i32* %10
  %114 = sext i32 %112 to i64
  %115 = getelementptr inbounds i32, i32* %111, i64 %114
  %116 = load i32, i32* %115
  %117 = load i32*, i32** %8
  %118 = load i32, i32* %11
  %119 = add nsw i32 %118, 1
  store i32 %119, i32* %11
  %120 = sext i32 %118 to i64
  %121 = getelementptr inbounds i32, i32* %117, i64 %120
  store i32 %116, i32* %121
  br label %106
122:
  store i32 0, i32* %12
  br label %124
124:
  %125 = load i32, i32* %12
  %126 = load i32, i32* %11
  %127 = icmp slt i32 %125, %126
  br i1 %127, label %130, label %128
128:
  br label %145
130:
  %131 = load i32*, i32** %8
  %132 = load i32, i32* %12
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds i32, i32* %131, i64 %133
  %135 = load i32, i32* %134
  %136 = load i32*, i32** %4
  %137 = load i32, i32* %5
  %138 = load i32, i32* %12
  %139 = add nsw i32 %137, %138
  %140 = sext i32 %139 to i64
  %141 = getelementptr inbounds i32, i32* %136, i64 %140
  store i32 %135, i32* %141
  br label %142
142:
  %143 = load i32, i32* %12
  %144 = add nsw i32 %143, 1
  store i32 %144, i32* %12
  br label %124
145:
  %146 = load i32*, i32** %8
  call void @free(i8* %147)
  br label %153
153:
  ret void
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %78
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  %48 = sub nsw i32 %47, 1
  call void @Z4(i32* %46, i32 0, i32 %48)
  store i32 0, i32* %9
  br label %50
50:
  %51 = load i32, i32* %9
  %52 = load i32, i32* %6
  %53 = icmp slt i32 %51, %52
  br i1 %53, label %56, label %54
54:
  br label %72
56:
  %57 = load i32*, i32** %7
  %58 = load i32, i32* %9
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32, i32* %9
  %63 = load i32, i32* %6
  %64 = sub nsw i32 %63, 1
  %65 = icmp eq i32 %62, %64
  %66 = zext i1 %65 to i64
  %67 = select i1 %65, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @.str.1, i64 0, i64 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0)
  %68 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %61, i8* %67)
  br label %69
69:
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %50
72:
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.3, i64 0, i64 0))
  %74 = load i32*, i32** %7
  call void @free(i8* %75)
  store i32 0, i32* %3
  br label %78
78:
  %79 = load i32, i32* %3
  ret i32 %79
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
