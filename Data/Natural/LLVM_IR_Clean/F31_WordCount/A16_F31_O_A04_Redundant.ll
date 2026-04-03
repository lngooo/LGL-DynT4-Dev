define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %66
10:
  %12 = load i32, i32* %3
  %13 = mul nsw i32 %12, 2
  %14 = sdiv i32 %13, 1
  store i32 %14, i32* %4
  br label %15
15:
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %26
20:
  %21 = load i8*, i8** %2
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = call i32 @isspace(i32 %23)
  %25 = icmp ne i32 %24, 0
  br label %26
26:
  %27 = phi i1 [ false, %15 ], [ %25, %20 ]
  br i1 %27, label %28, label %33
28:
  %29 = load i8*, i8** %2
  %30 = getelementptr inbounds i8, i8* %29, i32 1
  store i8* %30, i8** %2
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %4
  br label %15
33:
  %34 = load i8*, i8** %2
  %35 = load i8, i8* %34
  %36 = icmp ne i8 %35, 0
  br i1 %36, label %37, label %58
37:
  %38 = load i32, i32* %3
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %3
  br label %40
40:
  %41 = load i8*, i8** %2
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = icmp ne i32 %43, 0
  br i1 %44, label %45, label %52
45:
  %46 = load i8*, i8** %2
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = call i32 @isspace(i32 %48)
  %50 = icmp ne i32 %49, 0
  %51 = xor i1 %50, true
  br label %52
52:
  %53 = phi i1 [ false, %40 ], [ %51, %45 ]
  br i1 %53, label %54, label %57
54:
  %55 = load i8*, i8** %2
  %56 = getelementptr inbounds i8, i8* %55, i32 1
  store i8* %56, i8** %2
  br label %40
57:
  br label %58
58:
  %59 = load i32, i32* %4
  %60 = icmp slt i32 %59, 0
  br i1 %60, label %61, label %64
61:
  %62 = load i32, i32* %3
  %63 = add nsw i32 %62, -1
  store i32 %63, i32* %3
  br label %64
64:
  br label %6
66:
  %67 = load i32, i32* %3
  ret i32 %67
}
declare i32 @isspace(i32)
