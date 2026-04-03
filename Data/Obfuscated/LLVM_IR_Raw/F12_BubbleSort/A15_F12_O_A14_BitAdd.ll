@.str = constant [4 x i8] c"%d \00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local i32 @bA(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  br label %6
6:
  %7 = load i32, i32* %4
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %20
9:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  store i32 %13, i32* %5
  %14 = load i32, i32* %4
  %15 = load i32, i32* %3
  %16 = xor i32 %15, %14
  store i32 %16, i32* %3
  %17 = load i32, i32* %5
  %18 = shl i32 %17, 1
  store i32 %18, i32* %4
  br label %6
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define dso_local void @a(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = icmp ne i32 %12, 0
  %14 = xor i1 %13, true
  br i1 %14, label %15, label %116
15:
  store i32 1, i32* %5
  store i32 1, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %4
  %20 = call i32 @bA(i32 %19, i32 -1)
  %21 = icmp slt i32 %18, %20
  br i1 %21, label %24, label %22
22:
  br label %65
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %6
  %32 = call i32 @bA(i32 %31, i32 1)
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %30, i64 %33
  %35 = load i32, i32* %34
  %36 = icmp sgt i32 %29, %35
  br i1 %36, label %37, label %61
37:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  store i32 %43, i32* %7
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %6
  %46 = call i32 @bA(i32 %45, i32 1)
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %44, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32*, i32** %3
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  store i32 %49, i32* %53
  %54 = load i32, i32* %7
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %6
  %57 = call i32 @bA(i32 %56, i32 1)
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %55, i64 %58
  store i32 %54, i32* %59
  store i32 0, i32* %5
  br label %61
61:
  br label %62
62:
  %63 = load i32, i32* %6
  %64 = call i32 @bA(i32 %63, i32 2)
  store i32 %64, i32* %6
  br label %17
65:
  store i32 0, i32* %8
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = load i32, i32* %4
  %70 = call i32 @bA(i32 %69, i32 -1)
  %71 = icmp slt i32 %68, %70
  br i1 %71, label %74, label %72
72:
  br label %115
74:
  %75 = load i32*, i32** %3
  %76 = load i32, i32* %8
  %77 = sext i32 %76 to i64
  %78 = getelementptr inbounds i32, i32* %75, i64 %77
  %79 = load i32, i32* %78
  %80 = load i32*, i32** %3
  %81 = load i32, i32* %8
  %82 = call i32 @bA(i32 %81, i32 1)
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %80, i64 %83
  %85 = load i32, i32* %84
  %86 = icmp sgt i32 %79, %85
  br i1 %86, label %87, label %111
87:
  %89 = load i32*, i32** %3
  %90 = load i32, i32* %8
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  %93 = load i32, i32* %92
  store i32 %93, i32* %9
  %94 = load i32*, i32** %3
  %95 = load i32, i32* %8
  %96 = call i32 @bA(i32 %95, i32 1)
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %94, i64 %97
  %99 = load i32, i32* %98
  %100 = load i32*, i32** %3
  %101 = load i32, i32* %8
  %102 = sext i32 %101 to i64
  %103 = getelementptr inbounds i32, i32* %100, i64 %102
  store i32 %99, i32* %103
  %104 = load i32, i32* %9
  %105 = load i32*, i32** %3
  %106 = load i32, i32* %8
  %107 = call i32 @bA(i32 %106, i32 1)
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i32, i32* %105, i64 %108
  store i32 %104, i32* %109
  store i32 0, i32* %5
  br label %111
111:
  br label %112
112:
  %113 = load i32, i32* %8
  %114 = call i32 @bA(i32 %113, i32 2)
  store i32 %114, i32* %8
  br label %67
115:
  br label %11
116:
  ret void
}
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
  br label %71
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
  call void @a(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %65
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %60)
  br label %62
62:
  %63 = load i32, i32* %9
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %9
  br label %49
65:
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  %67 = load i32*, i32** %7
  call void @free(i8* %68)
  store i32 0, i32* %3
  br label %71
71:
  %72 = load i32, i32* %3
  ret i32 %72
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
