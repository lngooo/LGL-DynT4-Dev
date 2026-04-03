@.str = constant [4 x i8] c"%d\0A\00"
define dso_local void @G(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32, i32* %6
  store i32 %12, i32* %7
  %14 = load i32, i32* %6
  %15 = mul nsw i32 2, %14
  %16 = add nsw i32 %15, 1
  store i32 %16, i32* %8
  %18 = load i32, i32* %6
  %19 = mul nsw i32 2, %18
  %20 = add nsw i32 %19, 2
  store i32 %20, i32* %9
  %21 = load i32, i32* %8
  %22 = load i32, i32* %5
  %23 = icmp slt i32 %21, %22
  br i1 %23, label %24, label %38
24:
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %8
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = load i32*, i32** %4
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = icmp sgt i32 %29, %34
  br i1 %35, label %36, label %38
36:
  %37 = load i32, i32* %8
  store i32 %37, i32* %7
  br label %38
38:
  %39 = load i32, i32* %9
  %40 = load i32, i32* %5
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %56
42:
  %43 = load i32*, i32** %4
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32*, i32** %4
  %49 = load i32, i32* %7
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = icmp sgt i32 %47, %52
  br i1 %53, label %54, label %56
54:
  %55 = load i32, i32* %9
  store i32 %55, i32* %7
  br label %56
56:
  %57 = load i32, i32* %7
  %58 = load i32, i32* %6
  %59 = icmp ne i32 %57, %58
  br i1 %59, label %60, label %85
60:
  %62 = load i32*, i32** %4
  %63 = load i32, i32* %6
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65
  store i32 %66, i32* %10
  %67 = load i32*, i32** %4
  %68 = load i32, i32* %7
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  %71 = load i32, i32* %70
  %72 = load i32*, i32** %4
  %73 = load i32, i32* %6
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  store i32 %71, i32* %75
  %76 = load i32, i32* %10
  %77 = load i32*, i32** %4
  %78 = load i32, i32* %7
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i32, i32* %77, i64 %79
  store i32 %76, i32* %80
  %81 = load i32*, i32** %4
  %82 = load i32, i32* %5
  %83 = load i32, i32* %7
  call void @G(i32* %81, i32 %82, i32 %83)
  br label %85
85:
  ret void
}
define dso_local i32 @Nclr3(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = mul i64 %11, 4
  %13 = call noalias i8* @malloc(i64 %12)
  store i32* %14, i32** %5
  store i32 0, i32* %6
  br label %16
16:
  %17 = load i32, i32* %6
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  br label %35
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = load i32*, i32** %5
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  store i32 %27, i32* %31
  br label %32
32:
  %33 = load i32, i32* %6
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %6
  br label %16
35:
  %37 = load i32, i32* %4
  %38 = sdiv i32 %37, 2
  %39 = sub nsw i32 %38, 1
  store i32 %39, i32* %7
  br label %40
40:
  %41 = load i32, i32* %7
  %42 = icmp sge i32 %41, 0
  br i1 %42, label %45, label %43
43:
  br label %52
45:
  %46 = load i32*, i32** %5
  %47 = load i32, i32* %4
  %48 = load i32, i32* %7
  call void @G(i32* %46, i32 %47, i32 %48)
  br label %49
49:
  %50 = load i32, i32* %7
  %51 = add nsw i32 %50, -1
  store i32 %51, i32* %7
  br label %40
52:
  %54 = load i32*, i32** %5
  %55 = getelementptr inbounds i32, i32* %54, i64 0
  %56 = load i32, i32* %55
  store i32 %56, i32* %8
  %57 = load i32*, i32** %5
  call void @free(i8* %58)
  %59 = load i32, i32* %8
  ret i32 %59
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
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %53
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = mul i64 %18, 4
  %20 = call noalias i8* @malloc(i64 %19)
  store i32* %21, i32** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %44
29:
  %30 = load i8**, i8*** %5
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %30, i64 %33
  %35 = load i8*, i8** %34
  %36 = call i32 @atoi(i8* %35)
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %23
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %6
  %47 = call i32 @Nclr3(i32* %45, i32 %46)
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %47)
  %49 = load i32*, i32** %7
  call void @free(i8* %50)
  store i32 0, i32* %3
  br label %53
53:
  %54 = load i32, i32* %3
  ret i32 %54
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
