@.str = constant [5 x i8] c"%02x\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @cE(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i8*, i8** %3
  %13 = load i32, i32* %5
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %5
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %5
  br label %11
21:
  br label %22
22:
  %23 = load i8*, i8** %4
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %29, label %32
29:
  %30 = load i32, i32* %6
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %6
  br label %22
32:
  store i32 0, i32* %7
  %35 = load i32, i32* %5
  %36 = sub nsw i32 %35, 1
  store i32 %36, i32* %8
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = load i32, i32* %8
  %40 = icmp sle i32 %38, %39
  br i1 %40, label %41, label %83
41:
  %42 = load i8*, i8** %4
  %43 = load i32, i32* %7
  %44 = load i32, i32* %6
  %45 = srem i32 %43, %44
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %42, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = xor i32 %55, %49
  %57 = trunc i32 %56 to i8
  store i8 %57, i8* %53
  %58 = load i32, i32* %7
  %59 = load i32, i32* %8
  %60 = icmp ne i32 %58, %59
  br i1 %60, label %61, label %78
61:
  %62 = load i8*, i8** %4
  %63 = load i32, i32* %8
  %64 = load i32, i32* %6
  %65 = srem i32 %63, %64
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %62, i64 %66
  %68 = load i8, i8* %67
  %69 = sext i8 %68 to i32
  %70 = load i8*, i8** %3
  %71 = load i32, i32* %8
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = xor i32 %75, %69
  %77 = trunc i32 %76 to i8
  store i8 %77, i8* %73
  br label %78
78:
  %79 = load i32, i32* %7
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %7
  %81 = load i32, i32* %8
  %82 = add nsw i32 %81, -1
  store i32 %82, i32* %8
  br label %37
83:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i8*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %59
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  store i8* %17, i8** %6
  %19 = load i8**, i8*** %5
  %20 = getelementptr inbounds i8*, i8** %19, i64 2
  %21 = load i8*, i8** %20
  store i8* %21, i8** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i8*, i8** %6
  %25 = load i32, i32* %8
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %8
  br label %23
33:
  %34 = load i8*, i8** %6
  %35 = load i8*, i8** %7
  call void @cE(i8* %34, i8* %35)
  store i32 0, i32* %9
  br label %37
37:
  %38 = load i32, i32* %9
  %39 = load i32, i32* %8
  %40 = icmp slt i32 %38, %39
  br i1 %40, label %43, label %41
41:
  br label %54
43:
  %44 = load i8*, i8** %6
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = zext i8 %48 to i32
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %49)
  br label %51
51:
  %52 = load i32, i32* %9
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %9
  br label %37
54:
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %3
  br label %59
59:
  %60 = load i32, i32* %3
  ret i32 %60
}
declare i32 @printf(i8*, ...)
